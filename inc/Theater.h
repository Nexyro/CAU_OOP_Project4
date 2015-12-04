#pragma once
/*
 * info about the theater
*/

#include <map>

#include "IEntity.h"

class Theater : public IEntity
{
private:
	int		id;
	string	name;		// ex) CGV Yongsan, CGV Yeouido
	string	location;	// ex) Yongsan, Yeouido, Shinchon

public:
	Theater();
	Theater(int, string, string);
	Theater(map<string, string>&);
	~Theater();

	int				getId() const;
	string			getName() const;
	string			getLocation() const;

	static string	getTableName();
};
