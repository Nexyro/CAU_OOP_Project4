#pragma once

#include "IEntity.h"

class Movie : public IEntity
{
public:
	int		id;
	string	title;
	string	description;
	string	time;
	int		duration;
	int		stars;

public:
	Movie();
	Movie(int, string, string, string, int, int);
	~Movie();

	int		getId();
	string	getTitle();
	string	getDescription();
	string	getTime();
	int		getDuration();
	int		getStars();

	string	getEntityName();
};
