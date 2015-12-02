#pragma once

#include "IRepository.h"

class MovieRepository : public IRepository
{
public:
	MovieRepository();
	~MovieRepository();

	IEntity findById(int);
	IEntity findBy(string*);
	IEntity findAll();
};

