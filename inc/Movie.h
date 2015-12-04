#pragma once

#include "IEntity.h"
#include <map>

class Movie : public IEntity
{
private:
	int		id;
	string	title;			// Inception
	string	description;	// Something ...
	int		duration;		// 42
	int		stars;			// 5

public:
	Movie();
	Movie(int, string, string, int, int, int);
	Movie(map<string, string>&);
	~Movie();

	int				getId() const;
	string			getTitle() const;
	string			getDescription() const;
	int				getDuration() const;
	int				getStars() const;

	static string	getTableName();
};
