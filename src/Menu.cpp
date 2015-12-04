//#include <iostream>
//#include <string>
//#include "Menu.h"
//#include "User.h"
//
//using namespace std;
//
//int Menu::run()
//{
//	return this->showMenu();
//}
//
//int Menu::showMenu()
//{
//	int userChoice;
//
//	cout << "---MENU---" << endl
//		<< "1. Login" << endl
//		<< "2. Sign Up" << endl
//		<< "3. Search Movie" << endl
//		<< "4. Search Schedule" << endl
//		<< "5. Book Tickets" << endl
//		<< "6. End Program" << endl
//		<< "> ";
//
//	cin >> userChoice;
//	getchar();
//
//	switch (userChoice)
//	{
//	case 1:
//		this->login();
//		break;
//	case 2:
//		this->signUp();
//		break;
//	case 3:
//		this->searchMovie();
//		break;
//	case 4:
//		this->searchSchedule();
//		break;
//	case 5:
//		this->bookTickets();
//		break;
//	case 6:
//		return 0;
//		break;
//	}
//	return 1;
//}
//
//void Menu::login()
//{
//	string id, password;
//	int find_what;
//
//	cout << "---LOGIN---" << endl;
//	cout << "id: ";
//	cin >> id;
//	cout << "password: ";
//	cin >> password;
//
//	// compare with DB
//
//	// if id/pw does not match data in DB,
//	cout << "---FIND ID/PW---" << endl;
//	cout << "1. Find ID" << endl
//		<< "2. Find Password" << endl
//		<< "> ";
//	cin >> find_what;
//
//	if (find_what == 1)			// find id
//	{
//		this->searchId();
//	}
//	else if (find_what == 2)	// find password
//	{
//		this->searchPassword();
//	}
//
//}
//
//void Menu::searchId()
//{
//	int find_how;
//	string email_userinput, email_db;
//	string year, month, date;
//
//	cout << "---How do you wish to find your id?---" << endl;
//	cout << "1. Find by email" << endl
//		<< "2. Find by birthday" << endl
//		<< "3. Back" << endl
//		<< "> ";
//	cin >> find_how;
//
//	if (find_how == 1)
//	{
//		cout << "---FIND ID---" << endl
//			<< "email: ";
//		cin >> email_userinput;
//
//		// search DB for email_userinput.
//		// if such an email exists, go back to login.
//		// if email_userinput does not exist,
//		// cout << " email_userinput does not exist" << endl;
//		// ask user if they want to sign up.
//		// if yes, go this->signUp();
//	} 
//	else if (find_how == 2)		// find password
//	{
//		cout << "---FIND ID---" << endl;
//		cout << "year: ";		cin >> year;
//		cout << "month: ";		cin >> month;
//		cout << "date: ";		cin >> date;
//
//		// search DB for birthday.
//		// if such a birthday exists, go back to login.
//		// if birthday info does not exist,
//		// cout << " birthday does not exist" << endl;
//		// ask user if they want to sign up.
//		// if yes, go this->signUp();
//	}
//}
//
//void Menu::searchPassword()
//{
//	int find_how;
//	string name, id, email;
//
//	cout << "---FIND PASSWORD---" << endl;
//	cout << "name: ";	cin >> name;
//	cout << "id: ";		cin >> id;
//	cout << "e-mail: "; cin >> email;
//
//	// search DB for name, id, e-mail info.
//	// If such info exists, provide temporary password.
//	// The user password in the DB should be updated to this new password.
//	// The user should then be instructed to login with the new password and change the password.
//	// If such info does not exist, ask the user to make a new password.
//	// Ask for more personal info for security and then let the user reset the password.
//	// Then return to the login page.
//}
//
//void Menu::signUp()
//{
//	string name, id, password, mail;
//	string year, month, date, birthday;
//
//	cout << "---SIGN UP---" << endl;
//	cout << "name: ";		cin >> name;
//	cout << "e-mail: ";		cin >> mail;
//	cout << "id: ";			cin >> id;
//	cout << "password: ";	cin >> password;
//	cout << "year: ";		cin >> year;
//	cout << "month: ";		cin >> month;
//	cout << "date: ";		cin >> date;
//
//	// put together year, month, and date to birthday
//	birthday = year + "-" + month + "-" + date;
//
//	// check DB for the same ID. If the same ID exists, make the user choose another ID.
//	
//	//else, create new user
//	User* newUser = new User(id, name, mail, password, birthday);
//	// ORM->save(newUser);
//}
//
//void Menu::searchMovie()
//{
//	string name;
//
//	cout << "---SEARCH MOVIE---" << endl;
//	cout << "title: ";
//	getline(cin, name);
//
//	// if there is an entry in the DB with a matching name, print the movie info
//}
//
//void Menu::searchSchedule()
//{
//	string date_userinput;
//
//	cout << "---SEARCH SCHEDULE---" << endl;
//	// make the default year and month 2015 and 12
//	cout << "date: ";
//	cin >> date_userinput;
//
//	// select * from SHOWS where date = 'date_userinput'
//	// show time table for that day
//}
//
//void Menu::bookTickets()
//{
//	string date;
//	string time;
//	string location;
//	string theater;
//	string movie;
//
//	// but this part has to be done with the gui..how?
//	cout << "---BOOK TICKETS---" << endl;
//	// show calendar
//	cout << "date: ";		cin >> date;
//	// show locations list
//	cout << "location: ";	cin >> location;
//	// show theater list
//	cout << "theater: ";	cin >> theater;
//	// show movies playing in that theater
//	cout << "movie: ";		cin >> movie;
//	// show times for that movie in that theater
//	cout << "time: ";		cin >> time;
//}