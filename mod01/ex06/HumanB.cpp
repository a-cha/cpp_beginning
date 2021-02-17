//
// Created by Антон Чапарин on 15.02.2021.
//

#include "HumanB.hpp"
#include <iostream>

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string& name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
