#pragma once

#include "IEntity.h"

// info about the theater
class Theater : public IEntity
{
private:
	int		id;
	string	name;		// ex) CGV Yongsan, CGV Yeouido
	string	location;	// ex) Yongsan, Yeouido, Shinchon

public:
	Theater();
	Theater(int, string, string);
	~Theater();

	int		getId();
	string	getName();
	string	getLocation();

	string	getEntityNam();
};
