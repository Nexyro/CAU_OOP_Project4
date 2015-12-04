#include "Movie.h"

Movie::Movie() {}

Movie::Movie(int id, string title, string description, int time, int duration, int stars)
	: id(id), title(title), description(description), duration(duration), stars(stars) {}

Movie::Movie(map<string, string>& array)
{
	this->id			= stoi(array["id"]);
	this->title			= array["title"];
	this->description	= array["description"];
	this->duration		= stoi(array["duration"]);
	this->stars			= stoi(array["stars"]);
}

Movie::~Movie() {}

int		Movie::getId() const
{
	return this->id;
}

string	Movie::getTitle() const
{
	return this->title;
}

string	Movie::getDescription() const
{
	return this->description;
}

int		Movie::getDuration() const
{
	return this->duration;
}
int		Movie::getStars() const
{
	return this->stars;
}

string	Movie::getTableName() const
{
	return "MOVIES";
}
