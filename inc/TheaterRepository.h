#pragma once

#include "Repository.h"
#include "Theater.h"

class TheaterRepository : public Repository<Theater>
{
public:
	TheaterRepository(ORM*);
	~TheaterRepository();
};

