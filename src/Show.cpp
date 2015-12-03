#include "Show.h"

Show::Show() {}

Show::Show(string movie, string date,  string time, string theater, string room)
{
	this->movie = movie;
	this->date = date;
	this->time = time;
	this->theater = theater;
	this->room = room;
}

Show::~Show() {}