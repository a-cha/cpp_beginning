//
// Created by Антон Чапарин on 14.02.2021.
//

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : type(std::string()) { }

ZombieEvent::~ZombieEvent() { }

void ZombieEvent::setZombieType(const std::string &t)
{
	this->type = t;
}

Zombie *ZombieEvent::newZombie(const std::string &name)
{
	return (new Zombie(name, type));
}

Zombie *ZombieEvent::randomChump()
{
	Zombie *zombie;

	zombie = newZombie(Zombie::chooseRandomName());
	zombie->announce();
	return (zombie);
}
