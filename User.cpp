#include "User.h"

User::User() { }

User::User(string id, string password, string name, string phoneNumber)
{
	this->id = id;
	this->password = password;
	this->name = name;
	this->phoneNumber = phoneNumber;
}

User::~User() { }
