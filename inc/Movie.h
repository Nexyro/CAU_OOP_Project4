#pragma once

#include "IEntity.h"

class Movie : public IEntity
{
public:
	int		id;
	string	title;
	string	time;
	string	date;
	int		duration;
	int		stars;

public:
	Movie();
	Movie(string, string, string, int, int);
	Movie(int, string, string, string, int, int);
	~Movie();

	int		getId();
	string	getTitle();
	string	getTime();
	string	getDate();
	int		getDuration();
	int		getStars();

	string	getEntityName();
};

