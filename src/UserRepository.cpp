#include "UserRepository.h"

UserRepository::UserRepository(ORM *orm): Repository(orm) {}


UserRepository::~UserRepository() {}

bool	UserRepository::login(string name, string password)
{
	return false;
}