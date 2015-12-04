#pragma once

#include <map>

#include "IEntity.h"

class User : public IEntity
{
private:
	int		id;	
	string	name;		// Toto
	string	mail;		// toto@example.com
	string	password;	// toto42

public:
	User();
	User(int, string, string, string);
	User(map<string, string>&);
	~User();

	int				getId() const;
	string			getName() const;
	string			getMail() const;

	static string	getTableName();
};

