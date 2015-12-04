#pragma once
/*
 * this is not really a ORM, but this is an abstraction of the database
 */


#include <SQLiteCpp/SQLiteCpp.h>
#include <iostream>
#include <map>

#include "IEntity.h"

using namespace std;

class ORM
{
private:
	SQLite::Database				*db;
	SQLite::Statement				*query;

public:
	ORM();
	~ORM();
	
	void							setQuerySQL(string);
	map<const char*, const char*>*	fetchArray();
	void							bind(int, int);
};

