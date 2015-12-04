#include "Theater.h"

Theater::Theater() {}

Theater::Theater(int id,  string name, string location) : id(id), name(name), location(location) {}

Theater::~Theater() {}

int		Theater::getId()
{
	return this->id;
}

string	Theater::getName()
{
	return this->name;
}

string	Theater::getLocation()
{
	return this->location;
}
