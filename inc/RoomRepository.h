#pragma once

#include "IRepository.h"

class RoomRepository : public IRepository<RoomRepository>
{
public:
	RoomRepository();
	~RoomRepository();
};

