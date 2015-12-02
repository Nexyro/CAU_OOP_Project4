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
	~User();

	string	getId();
	string	getName();
	string	getMail();
	string	getPassword();

	string	getEntityName();
};

