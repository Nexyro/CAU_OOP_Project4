#pragma once

#include <SQLiteCpp/SQLiteCpp.h>

#include "IEntity.h"

using namespace std;

class ORM
{
private:
	SQLite::Database	*db;

public:
	ORM();
	~ORM();
	
	void	query();
	void	exec();
	void	save(IEntity);
};

