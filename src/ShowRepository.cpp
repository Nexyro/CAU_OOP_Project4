#include "ShowRepository.h"

ShowRepository::ShowRepository(ORM *orm) : Repository(orm) {}


ShowRepository::~ShowRepository() {}

list<Show>*	ShowRepository::findByTheaterAndMovie(int idMovie, int idTheater)
{
	list<Show>*				listObj = new list<Show>;
	map<string, string>*	resultQuery;

	this->orm->setQuerySQL("SELECT * FROM " + Show::getTableName() + " WHERE id_fk_movie = ? AND id_fk_theater = ?");
	this->orm->bind(1, idMovie);
	this->orm->bind(2, idTheater);

	while (resultQuery = this->orm->fetchArray())
	{
		listObj->push_back(Show(*resultQuery));
	}
	return listObj;
}