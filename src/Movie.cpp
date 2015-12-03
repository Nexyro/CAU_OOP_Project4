#include "Movie.h"

Movie::Movie()
{
}

Movie::Movie(string title, string time, string date, int duration, int stars)
	: title(title), time(time), date(date), duration(duration), stars(stars) {}

Movie::Movie(int id, string title, string time, string date, int duration, int stars)
	: id(id), title(title), time(time), date(date), duration(duration), stars(stars) {}


Movie::~Movie() {}

int		Movie::getId()
{
	return this->id;
}

string	Movie::getTitle()
{
	return this->title;
}

string	Movie::getTime()
{
	return this->time;
}

string	Movie::getDate()
{
	return this->date;
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