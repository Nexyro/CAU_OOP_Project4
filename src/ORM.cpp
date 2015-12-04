#include "ORM.h"

ORM::ORM()
{
	this->db = new SQLite::Database("OOPsIWatchedItAgain.db");
}

ORM::~ORM()
{
	delete this->db;
	delete this->query;
}

void						ORM::setQuerySQL(string query)
{
	this->query = new SQLite::Statement(*this->db, query);
}

map<string, string>*		ORM::fetchArray()
{
	map<string, string>*	listResult = new map<string, string>;

	if (this->query->executeStep())
	{
		for (int i = 0; i < this->query->getColumnCount(); i++)
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
void								ORM::bind(int index, string value)
{
	this->query->bind(index, value);
}