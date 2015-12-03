#include "UserRepository.h"

UserRepository::UserRepository(ORM *orm): orm(orm) {}


UserRepository::~UserRepository()
{
}

User*		UserRepository::findById(int id)
{
	User*	user = new User();

	return user;
}
list<User>* UserRepository::findBy(string[])
{
	list<User>*	listUsers = new list<User>;

	return listUsers;
}
list<User>* UserRepository::findAll()
{
	list<User>*	listUsers = new list<User>;

	return listUsers;
}