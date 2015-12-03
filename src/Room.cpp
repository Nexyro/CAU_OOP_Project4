#include "Room.h"

Room::Room() {}

Room::Room(string name, string theaterName, int seatCount, string type)
{
	this->name = name;
	this->theaterName = theaterName;
	this->seatCount = seatCount;
	this->type = type;
}

Room::~Room() {}