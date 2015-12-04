#pragma once

#include "IRepository.h"

class TheaterRepository : public IRepository<TheaterRepository>
{
public:
	TheaterRepository();
	~TheaterRepository();
};

