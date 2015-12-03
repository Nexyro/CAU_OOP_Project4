#pragma once

class Menu
{
public:
	int run();
private:
	int showMenu();
	void login();
	void signUp();
	void searchMovie();
	void searchSchedule();
	void bookTickets();
};