#pragma once

#include <string>
#include "Repository.h"
#include "Movie.h"

class MovieRepository : public Repository<Movie>
{
public:
	MovieRepository(ORM*);
	~MovieRepository();

};
