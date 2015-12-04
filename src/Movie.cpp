#include "Movie.h"

Movie::Movie()
{
}

Movie::Movie(int id, string title, string description, string time, int duration, int stars)
	: id(id), title(title), description(description), time(time), duration(duration), stars(stars) {}


Movie::~Movie() {}

int		Movie::getId()
{
	return this->id;
}

string	Movie::getTitle()
{
	return this->title;
}

string	Movie::getDescription()
{
	return this->description;
}

string	Movie::getTime()
{
	return this->time;
}

int		Movie::getDuration()
{
	return this->duration;
}
int		Movie::getStars()
{
	return this->stars;
}

string	Movie::getEntityName()
{
	return "Movie";
}
