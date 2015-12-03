#pragma once

#include "IEntity.h"

class User : public IEntity
{
public:
	int		id;	
	string	id_userid;	// added
	string	name;
	string	mail;
	string	password;
	string birthday;	// added

public:
	User();
	User(string, string, string);
	User(int, string, string, string);
	User(string, string, string, string, string);	// added
	~User();

	int	getId() const;
	string	getName() const;
	string	getMail() const;

	string	getEntityName() const;
};

