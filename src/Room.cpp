#include "Room.h"

Room::Room() {}

Room::Room(int id, int idFkTheater, string name, int seat, string type) : id(id), idFkTheater(idFkTheater), name(name), seat(seat), type(type) {}

Room::~Room() {}

int		Room::getId()
{
	return this->id;
}

string	Room::getName()
{
	return this->name;
}

int		Room::getSeat()
{
	return this->getSeat();
}

string	Room::getType()
{
	return this->type;
}

string	Room::getEntityName()
{
	return "Room";
}
