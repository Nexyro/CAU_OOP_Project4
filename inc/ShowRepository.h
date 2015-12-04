#pragma once

#include "IRepository.h"

class ShowRepository : public IRepository<ShowRepository>
{
public:
	ShowRepository();
	~ShowRepository();
};

