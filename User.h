#pragma once

#include <string>

using namespace std;

class User
{
private:
	string id;
	string password;
	string name;
	string phoneNumber;

public:
	User();
	User(string, string, string, string);
	~User();
};