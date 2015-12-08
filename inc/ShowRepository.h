#pragma once

#include "Repository.h"
#include "Show.h"

class ShowRepository : public Repository<Show>
{
public:
	ShowRepository(ORM*);
	~ShowRepository();

	list<Show>*	findByTheaterAndMovie(int, int);
};

