#include "Theater.h"

Theater::Theater() {}

Theater::Theater(int id,  string name, string location)
	: id(id), name(name), location(location) {}

Theater::Theater(map<string, string>& array)
{
	this->id = stoi(array["id"]);
	this->name = array["name"];
	this->location = array["location"];
}

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

string	Theater::getTableName()
{
	return "THEATERS";
}