#pragma once

#include "IRepository.h"

class UserRepository : public IRepository
{
public:
	UserRepository();
	~UserRepository();

	IEntity findById(int);
	IEntity findBy(string*);
	IEntity findAll();
};

