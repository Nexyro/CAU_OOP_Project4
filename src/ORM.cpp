#include "ORM.h"

ORM::ORM()
{
	this->db = new SQLite::Database("movies.db");
}


ORM::~ORM()
{
	delete this->db;
}
