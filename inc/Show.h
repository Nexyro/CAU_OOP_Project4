#pragma once
/*
* about each show by time
*/

#include <map>

#include "IEntity.h"

class Show : public IEntity
{
private:
	int		id;
	int		idFkMovie;		// The Hunger Games
	int		idFkTheater;
	int		idFkRoom;		// CINEMA 9 (218 seats)
	string	date;			// 12-03-2015-21-20

public:
	Show();
	Show(int, int, int, string);
	Show::Show(map<string, string>&);
	~Show();

	int				getId() const;
	string			getDate() const;
	int				getTheaterId() const;

	static string	getTableName();
};
