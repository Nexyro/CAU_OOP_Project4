#pragma once

/*
 * Base class for Repository
 * Repository contains SQL queries. It's the bridge between Entity and ORM.
*/
#include <list>

template <class T>
class IRepository
{
public:
	virtual ~IRepository() {};

	virtual T*			findById(int) = 0;
	virtual	list<T>*	findAll() = 0;
};