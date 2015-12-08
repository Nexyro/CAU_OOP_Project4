#pragma once

/*
 * Base class for Repository
 * Repository contains SQL queries. It's the bridge between Entity and ORM.
*/

#include <list>

#include "ORM.h"

template <class T>
class Repository
{
public:
	ORM*	orm;

public:
	Repository(ORM* orm) : orm(orm) {}
	~Repository() {}

	T*			findById(int id)
	{
		T*						obj;
		map<string, string>*	resultQuery;

		this->orm->setQuerySQL("SELECT * FROM " + T::getTableName() + " WHERE id = ?");
		this->orm->bind(1, id);

		resultQuery = this->orm->fetchArray();
		obj = new T(*resultQuery);

		return obj;
	}

	T*			findOneBy(string key, std::string title)
	{
		T*						obj;
		map<string, string>*	resultQuery;

		this->orm->setQuerySQL("SELECT * FROM " + T::getTableName() + " WHERE " + key +" = ?");
		this->orm->bind(1, title);

		resultQuery = this->orm->fetchArray();
		if (resultQuery == NULL)
			return NULL;
		obj = new T(*resultQuery);

		return obj;
	}

	list<T>*	findBy(string key, std::string value)
	{
		list<T>*				listObj = new list<T>;
		map<string, string>*	resultQuery;

		this->orm->setQuerySQL("SELECT * FROM  " + T::getTableName() + " WHERE " + key + " = ?");
		this->orm->bind(1, value);

		while (resultQuery = this->orm->fetchArray())
		{
			listObj->push_back(T(*resultQuery));
		}
		return listObj;
	}

	list<T>*	findAll()
{
	list<T>*				listObj = new list<T>;
	map<string, string>*	resultQuery;

	this->orm->setQuerySQL("SELECT * FROM  " + T::getTableName());

	while (resultQuery = this->orm->fetchArray())
	{
		listObj->push_back(Movie(*resultQuery));
	}
	return listObj;
}
};