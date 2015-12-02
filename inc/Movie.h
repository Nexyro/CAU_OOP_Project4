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
	~Movie();

	int		getId();
	string	getTitle();
	string	getTime();
	string	getDate();
	string	getDuration();
	int		getStars();

	string	getEntityName();
};

