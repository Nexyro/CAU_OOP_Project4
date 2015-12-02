#pragma once

#include <string>

using namespace std;

class IEntity
{
public:
	virtual ~IEntity();

	virtual string	getEntityName() = 0;
};