//
// Created by Антон Чапарин on 14.02.2021.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	Zombie(const std::string &name, const std::string &type);
	Zombie();
	~Zombie();
	std::string getName();
	std::string getType();
	void announce();
	static std::string chooseRandomName();
};


#endif //EX02_ZOMBIE_HPP
