#include "Movie.h"

Movie::Movie()
{
}

Movie::Movie(string title, string time, string date, int duration, int stars)
	: title(title), time(time), date(date), duration(duration), stars(stars) {}

Movie::Movie(int id, string title, string time, string date, int duration, int stars)
	: id(id), title(title), time(time), date(date), duration(duration), stars(stars) {}


Movie::~Movie() {}

int		Movie::getId() const
{
	return this->id;
}

string	Movie::getTitle() const
{
	return this->title;
}

string	Movie::getTime() const
{
	return this->time;
}

string	Movie::getDate() const
{
	return this->date;
}

int		Movie::getDuration() const
{
	return this->duration;
}
int		Movie::getStars() const
{
	return this->stars;
}

string	Movie::getEntityName() const
{
	return "Movie";
}