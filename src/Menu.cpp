#include <iostream>
#include <string>
#include "Menu.h"

using namespace std;

int Menu::run()
{
	return this->showMenu();
}

int Menu::showMenu()
{
	int userChoice;

	cout << "---MENU---" << endl
		<< "1. Login" << endl
		<< "2. Sign Up" << endl
		<< "3. Search Movie" << endl
		<< "4. Search Schedule" << endl
		<< "5. Book Tickets" << endl
		<< "6. End Program";

	cin >> userChoice;
	getchar();

	switch (userChoice)
	{
	case 1:
		this->login();
		break;
	case 2:
		this->signUp();
		break;
	case 3:
		this->searchMovie();
		break;
	case 4:
		this->searchSchedule();
		break;
	case 5:
		this->bookTickets();
		break;
	case 6:
		return 0;
		break;
	}
	return 1;
}

void Menu::login()
{
	string id, password;
	int find_what, find_how;

	cout << "---LOGIN---" << endl;
	cout << "id: ";  
	cin >> id;
	cout << endl;
	cout << "password: ";
	cin >> password;

	// get data from DB and compare

	// if does not match data in DB,
	cout << "1. Find ID" << endl
		 << "2. Find Password" << endl;
	if (find_what == 1)
	{
		cout << "1. Find by email" << endl
			<< "2. Find by birthday" << endl
			<< "3. Back" << endl;
		cin >> find_how;
		if (find_how == 1)
		{
			// get email from DB and compare
		}
		else if (find_how == 2)
		{
			// get birthday from DB and compare
		}
	}
	else if (find_what == 2)
	{
		// find password
	}

}

void Menu::signUp()
{
	string name, id, password, mail;
	string year, month, date;
	
	cout << "---SIGN UP---" << endl;
	cout << "name: ";		cin >> name;		cout << endl;
	cout << "e-mail: ";		cin >> mail;		cout << endl;
	cout << "id: ";			cin >> id;			cout << endl;
	cout << "password: ";	cin >> password;	cout << endl;
	cout << "year: ";		cin >> year;		cout << endl;
	cout << "month: ";		cin >> month;		cout << endl;
	cout << "date: ";		cin >> date;		cout << endl;
	
	// check DB for the same ID. If the same ID exists, make the user choose another ID.

	// insert into DB.
}

void Menu::searchMovie()
{

}