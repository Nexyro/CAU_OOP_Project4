#include "Room.h"

Room::Room() {}

Room::Room(int id, int idFkTheater, string name, int seat, string type)
	: id(id), idFkTheater(idFkTheater), name(name), seat(seat), type(type) {}

Room::Room(map<string, string>& array)
{
	this->id			= stoi(array["id"]);
	this->idFkTheater	= stoi(array["id_fk_theater"]);
	this->name			= array["name"];
	this->seat			= stoi(array["seat"]);
	this->type			= stoi(array["type"]);
}

Room::~Room() {}

int		Room::getId() const
{
	return this->id;
}

string	Room::getName() const
{
	return this->name;
}

int		Room::getSeat() const
{
	return this->seat;
}

string	Room::getType() const
{
	return this->type;
}

string	Room::getTableName()
{
	return "ROOMS";
}
