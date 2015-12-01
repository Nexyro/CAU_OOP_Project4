#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "inc\sqlite3.h"

using namespace std;


static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
	int i;
	for (i = 0; i<argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

int main(int argc, char* argv[])
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *select;
	char *createUsers;
	char *createMovies;
	char *insertIntoMovies;
	char *insertIntoUsers;
	const char* data = "Callback function called";


	/*-----------------Open Database------------------*/
	rc = sqlite3_open("movies.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		exit(0);
	}
	else {
		fprintf(stdout, "Opened database succesfully!\n");
	}

	/*-----------SELECT---------------*/
	select = "SELECT * from MOVIES";

	/* Execute SQL statement */
	rc = sqlite3_exec(db, select, callback, (void*)data, &zErrMsg);
	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Operation done successfully\n");
	}



	/*-------------------INSERT INTO-------------*/

	/*insertIntoUsers = "INSERT INTO USERS ( USERNAME, PASSWORD)" \
	"VALUES ('ttammero','12345678');";

	//WARNING! Do not use apostrophes in the description. SQLite will understand them as string ending limiters.
	insertIntoMovies = "INSERT INTO MOVIES (NAME, SHOW_TIME, THEATER_NAME, PREMIERE, AGELIMIT, DURATION_IN_MINUTES, STARS, DESCRIPTION)"	\
	"VALUES('007 SPECTRE', '2015-11-29 20:00', 'Some movie theater', '2015-10-30', 12, 149, 5, 'A cryptic message from Bonds past sends him on a trail to uncover a sinister organization. While M battles political forces to keep the secret service alive, Bond peels back the layers of deceit to reveal the terrible truth behind SPECTRE.');";

	/* Execute SQL statement */
	/*
	rc = sqlite3_exec(db, insertIntoUsers, callback, 0, &zErrMsg);
	if (rc != SQLITE_OK) {
	fprintf(stderr, "SQL error: %s\n", zErrMsg);
	sqlite3_free(zErrMsg);
	}
	else {
	fprintf(stdout, "Records created successfully\n");
	}

	rc = sqlite3_exec(db, insertIntoMovies, callback, 0, &zErrMsg);
	if (rc != SQLITE_OK) {
	fprintf(stderr, "SQL error: %s\n", zErrMsg);
	sqlite3_free(zErrMsg);
	}
	else {
	fprintf(stdout, "Records created successfully\n");
	}*/




	//CREATE TABLES


	/*---------Create SQL Statements-----------*/
	/*createUsers="CREATE TABLE USERS("	\
	"USERNAME VARCHAR(16) PRIMARY KEY NOT NULL,"	\
	"PASSWORD VARCHAR(32) NOT NULL);";

	createMovies = "CREATE TABLE MOVIES("	\
	"ID INTEGER PRIMARY KEY NOT NULL,"
	"NAME VARCHAR(64) NOT NULL,"	\
	"SHOW_TIME DATETIME NOT NULL,"	\
	"THEATER_NAME VARCHAR(64) NOT NULL,"	\
	"PREMIERE DATE,"	\
	"AGELIMIT SMALLINT,"	\
	"DURATION_IN_MINUTES SMALLINT,"	\
	"STARS SMALLINT,"	\
	"DESCRIPTION TEXT);";
	/*---------Execute SQL Statements------------*/

	/*rc = sqlite3_exec(db, createUsers, callback, 0, &zErrMsg);
	if (rc != SQLITE_OK) {
	fprintf(stderr, "SQL error: %s\n", zErrMsg);
	sqlite3_free(zErrMsg);
	}
	else {
	fprintf(stdout, "Table created successfully\n");
	}

	rc = sqlite3_exec(db, createMovies, callback, 0, &zErrMsg);
	if (rc != SQLITE_OK) {
	fprintf(stderr, "SQL error: %s\n", zErrMsg);
	sqlite3_free(zErrMsg);
	}
	else {
	fprintf(stdout, "Table created successfully \n");
	}
	*/

	sqlite3_close(db);
	cin.get();
	return 0;


}
