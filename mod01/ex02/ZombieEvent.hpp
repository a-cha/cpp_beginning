//
// Created by Антон Чапарин on 14.02.2021.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>

class ZombieEvent
{
private:
	std::string type;
public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(const std::string &t);
	Zombie *newZombie(const std::string &name);
	Zombie *randomChump();
};


#endif //EX02_ZOMBIEEVENT_HPP
