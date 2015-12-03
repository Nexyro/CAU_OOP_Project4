#include "MovieRepository.h"

MovieRepository::MovieRepository(ORM *orm): orm(orm) {}


MovieRepository::~MovieRepository()
{
}

Movie*			MovieRepository::findById(int id)
{
	Movie		*movie = new Movie();

	return movie;
}
list<Movie>*	MovieRepository::findBy(string[])
{
	list<Movie>	*listMovies = new list<Movie>;

	return listMovies;
}
list<Movie>*	MovieRepository::findAll()
{
	list<Movie>		*listMovies = new list<Movie>;
	map<string, string>	resultQuery;

	this->orm->querySQL("SELECT * FROM MOVIES");

	resultQuery = this->orm->fetchArray();

	listMovies->push_front(Movie(resultQuery["ID"], resultQuery["TITLE"]);

	return listMovies;
}