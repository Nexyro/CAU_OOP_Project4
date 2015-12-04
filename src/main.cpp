#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <SQLiteCpp/SQLiteCpp.h>

#include "MovieRepository.h"
#include "Menu.h"


using namespace std;


int main()
{
	MovieRepository*	MRepo = new MovieRepository(new ORM());
	MRepo->findById(1);

	try
	{
		// Open a database file
		SQLite::Database    db("movies.db");

		// Compile a SQL query, containing one parameter (index 1)
		SQLite::Statement   query(db, "SELECT * FROM MOVIES");

		// Loop to execute the query step by step, to get rows of result
		while (query.executeStep())
		{
			// Demonstrate how to get some typed column value
			int         id = query.getColumn(0);
			string		idName = query.getColumnName(0);
			const char* value = query.getColumn(1);

			std::cout << "Id:( "<< idName << ") " << id << " Name : " << value << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	// test
	Menu* menu = new Menu(); // why?
	while (menu->run() != 0);
}
