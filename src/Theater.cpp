#include "Theater.h"

Theater::Theater() {}

Theater::Theater(int id,  string name, string location)
	: id(id), name(name), location(location) {}

Theater::~Theater() {}

int		Theater::getId() const
{
	return this->id;
}

string	Theater::getName() const
{
	return this->name;
}

string	Theater::getLocation() const
{
	return this->location;
}

string	Theater::getTableName() const
{
	return "THEATERS";
}