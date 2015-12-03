#include "User.h"

User::User() {}

User::User(string name, string mail, string password)
	: name(name), mail(mail), password(password) {}

User::User(int id, string name, string mail, string password)
	: id(id), name(name), mail(mail), password(password) {}

User::~User() {}

int	User::getId()
{
	return this->id;
}

string	User::getName()
{
	return this->name;
}

string	User::getMail()
{
	return this->mail;
}

string	User::getEntityName()
{
	return "User";
}