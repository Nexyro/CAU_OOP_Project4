#pragma once

#include "inc\Room.h"
#include <string>

using namespace std;

// info about the theater
class Theater
{
private:
	string name;		// ex) CGV Yongsan, CGV Yeouido
	string location;	// ex) Yongsan, Yeouido, Shinchon

public:
	Theater();
	Theater(string, string);
	~Theater();
};
