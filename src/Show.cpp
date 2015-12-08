#include "Show.h"

Show::Show() {}

Show::Show(int id, int idFkMovie, int idFkRoom, string date)
	: id(id), idFkMovie(idFkMovie), idFkRoom(idFkRoom), date(date) {}

Show::Show(map<string, string>& array)
{
	this->id		= stoi(array["id"]);
	this->idFkMovie	= stoi(array["id_fk_movie"]);
	this->idFkRoom	= stoi(array["id_fk_room"]);
	this->idFkTheater = stoi(array["id_fk_theater"]);
	this->date		= array["date"];
}

Show::~Show() {}

int		Show::getId() const
{
	return this->id;
}

string	Show::getDate() const
{
	return this->date;
}

string	Show::getTableName()
{
	return "SHOWS";
}

int		Show::getTheaterId() const
{
	return this->idFkTheater;
}