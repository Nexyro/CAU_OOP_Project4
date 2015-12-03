#pragma once

#include "IRepository.h"
#include "User.h"
#include "ORM.h"

class UserRepository : public IRepository<User>
{
public:
	ORM	*orm;

public:
	UserRepository(ORM&);
	~UserRepository();

	User		findById(int);
	list<User>	findBy(string[]);
	list<User>	findAll();
};

