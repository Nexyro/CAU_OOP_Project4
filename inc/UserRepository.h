#pragma once

#include "Repository.h"
#include "User.h"

class UserRepository : public Repository<User>
{
public:
	UserRepository(ORM*);
	~UserRepository();

	bool	login(string name, string password);
};
