#include "Show.h"

Show::Show() {}

Show::Show(string movie, string time, string theater, string room)
{
	this->movie = movie;
	this->time = time;
	this->theater = theater;
	this->room = room;
}

Show::~Show() {}