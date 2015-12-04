#include "User.h"

User::User() {}

User::User(int id, string name, string mail, string password)
	: id(id), name(name), mail(mail), password(password) {}

User::User(map<string, string>& array)
{
	this->id		= stoi(array["id"]);
	this->name		= stoi(array["name"]);
	this->mail		= stoi(array["mail"]);
	this->password	= array["password"];
}

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

string	User::getTableName() const
{
	return "USERS";
}