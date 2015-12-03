#include "ORM.h"

ORM::ORM()
{
	this->db = new SQLite::Database("movies.db");
}


ORM::~ORM()
{
	delete this->db;
}

void	ORM::query(string query)
{
	this->query = query;
}

map<string, string>	ORM::fetchArray()
{
	if (this->query->executeStep())
	{

	}
	else
	{
		return NULL;
	}
}