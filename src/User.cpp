#include "User.h"

User::User() {}

User::User(string name, string mail, string password)
	: name(name), mail(mail), password(password) {}

User::User(int id, string name, string mail, string password)
	: id(id), name(name), mail(mail), password(password) {}

// added
User::User(string id_userid, string name, string mail, string password, string birthday)
	: id_userid(id_userid), name(name), mail(mail), password(password), birthday(birthday) {}

User::~User() {}

int	User::getId() const
{
	return this->id;
}

string	User::getName() const
{
	return this->name;
}

string	User::getMail() const
{
	return this->mail;
}

string	User::getEntityName() const
{
	return "User";
}