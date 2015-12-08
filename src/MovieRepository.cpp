#include "MovieRepository.h"

MovieRepository::MovieRepository(ORM *orm): Repository(orm) {}


MovieRepository::~MovieRepository() {}

Movie*			MovieRepository::findByTitle(string title)
{
	Movie*						obj;
	map<string, string>*	resultQuery;

	this->orm->setQuerySQL("SELECT * FROM " + Movie::getTableName() + " WHERE title = ?");
	this->orm->bind(1, title);

	resultQuery = this->orm->fetchArray();
	if (resultQuery == NULL)
		return NULL;
	obj = new Movie(*resultQuery);

	return obj;
}