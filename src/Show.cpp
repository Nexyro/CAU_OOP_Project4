#include "Show.h"

Show::Show() {}

Show::Show(int id, int idFkMovie, int idFkTheater, int idFkRoom, string date)
	: id(id), idFkMovie(idFkMovie), idFkTheater(idFkTheater), idFkRoom(idFkRoom), date(date) {}

Show::~Show() {}

int		Show::getId()
{
	return this->id;
}

string	Show::getDate()
{
	return this->date;
}

string	Show::getEntityName()
{
	return "Show";
}
