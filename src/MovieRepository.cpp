#include "MovieRepository.h"

MovieRepository::MovieRepository(ORM *orm): orm(orm) {}


MovieRepository::~MovieRepository()
{
}

Movie*								MovieRepository::findById(int id)
{
	Movie*							movie = new Movie();
	map<const char*, const char*>*	resultQuery;

	this->orm->setQuerySQL("SELECT * FROM MOVIES WHERE ID = ?");
	this->orm->bind(1, id);

	resultQuery = this->orm->fetchArray();

	return movie;
}

list<Movie>*						MovieRepository::findAll()
{
	list<Movie>*					listMovies = new list<Movie>;
	map<const char*, const char*>*	resultQuery;

	this->orm->setQuerySQL("SELECT * FROM MOVIES");

	while (resultQuery = this->orm->fetchArray())
	{
		//listMovies->push_front(Movie(resultQuery["ID"], resultQuery["NAME"], resultQuery["SHOW_TIME"], resultQuery["DATE"], resultQuery["NAME"], resultQuery["NAME"]);
	}
	return listMovies;
}