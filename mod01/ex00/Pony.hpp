//
// Created by Антон Чапарин on 14.02.2021.
//

#ifndef EX00_PONY_H
#define EX00_PONY_H

#include "string"

class Pony
{
private:
	std::string	name;
	std::string	placeToBe;
public:
	Pony(const std::string &name, const std::string &placeToBe);
	~Pony();
	static void phrase();
};

#endif //EX00_PONY_H
