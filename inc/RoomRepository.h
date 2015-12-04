#pragma once

#include "Repository.h"
#include "Room.h"

class RoomRepository : public Repository<Room>
{
public:
	RoomRepository(ORM*);
	~RoomRepository();

	list<Room>*	findByTheater();
};

