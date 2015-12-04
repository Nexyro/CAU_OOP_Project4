#include "ORM.h"

ORM::ORM()
{
	this->db = new SQLite::Database("movies.db");
}

ORM::~ORM()
{
	delete this->db;
	delete this->query;
}

void								ORM::setQuerySQL(string query)
{
	this->query = new SQLite::Statement(*this->db, query);
}

map<const char*, const char*>*		ORM::fetchArray()
{
	map<const char*, const char*>*	listResult = new map<const char*, const char*>;

	if (this->query->executeStep())
	{
		for (size_t i = 0; i < this->query->getColumnCount(); i++)
		{
			listResult->insert(make_pair(this->query->getColumn(i).getName(), this->query->getColumn(i).getText()));
		}
	}
	else
	{
		return NULL;
	}
	return listResult;
}

void								ORM::bind(int index, int value)
{
	this->query->bind(index, value);
}