#pragma once

#include <string>

using namespace std;

// about each show by time
class Show
{
private:
	string movie;		// The Hunger Games
	string date;		// 12-03-2015
	string time;		// 21:20
	string theater;		// CGV Yongsan
	string room;		// CINEMA 9 (218 seats)

public:
	Show();
	Show(string, string, string, string, string);
	~Show();
};
