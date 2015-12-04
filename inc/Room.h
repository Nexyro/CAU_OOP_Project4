#pragma once

#include "IEntity.h"

class Room : public IEntity
{
private:
	int		id;
	int		idFkTheater;		// CGV Yongsan
	string	name;			// Cinema 9
	int		seat;			// 218
	string	type;			// normal, 4DX, IMAX, etc.

public:
	Room();
	Room(int, int, string, int, string);
	~Room();

	int		getId();
	string	getName();
	int		getSeat();
	string	getType();

	string	getEntityName();

};
