#include "UserRepository.h"

UserRepository::UserRepository(ORM *orm): Repository(orm) {}


UserRepository::~UserRepository() {}

bool						UserRepository::login(string name, string password)
{
	map<string, string>*	resultQuery;

	this->orm->setQuerySQL("SELECT * FROM " + User::getTableName() + " WHERE name = ? AND password = ?");
	this->orm->bind(1, name);
	this->orm->bind(2, password);


	if (this->orm->fetchArray())
	{
		return true;
	}
	else
	{
		return false;
	}
}