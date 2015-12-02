#pragma once

#include "IEntity.h"

class IRepository
{
	virtual ~IRepository();

	virtual IEntity findById(int) = 0;
	virtual	IEntity findBy(string*) = 0;
	virtual	IEntity findAll() = 0;
};