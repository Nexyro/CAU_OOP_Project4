#pragma once

#include "IRepository.h"
#include "Movie.h"
#include "ORM.h"

class MovieRepository : public IRepository<Movie>
{
public:
	ORM	*orm;

public:
	MovieRepository(ORM&);
	~MovieRepository();

	Movie		findById(int);
	list<Movie> findBy(string[]);
	list<Movie> findAll();
};

