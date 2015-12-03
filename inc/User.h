#pragma once

#include "IEntity.h"

class User : public IEntity
{
public:
	int		id;
	string	name;
	string	mail;
	string	password;

public:
	User();
	User(string, string, string);
	User(int, string, string, string);
	~User();

	int	getId();
	string	getName();
	string	getMail();

	string	getEntityName();
};

