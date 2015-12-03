#pragma once

#include <string>

using namespace std;

class Room
{
private:
	string name;			// Cinema 9
	string theaterName;		// CGV Yongsan
	int seatCount;		// 218
	string type;			// normal, 4DX, IMAX, etc.

public:
	Room();
	Room(string, string, int, string);
	~Room();
};