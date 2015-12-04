#pragma once

#include "IEntity.h"

// about each show by time
class Show : public IEntity
{
private:
	int		id;
	int		idFkMovie;		// The Hunger Games
	int		idFkTheater;	// CGV Yongsan
	int		idFkRoom;		// CINEMA 9 (218 seats)
	string	date;		// 12-03-2015-21-20

public:
	Show();
	Show(int, int, int, int, string);
	~Show();

	int		getId();
	string	getDate();

	string	getEntityName();
};
