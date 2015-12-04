#pragma once
/*
 * Base class for an Entity
 * Entity is a data-model for describing the data in a database
*/

#include <string>

using namespace std;

class IEntity
{
public:
	virtual ~IEntity() {};

	virtual string	getEntityName() = 0;
};
