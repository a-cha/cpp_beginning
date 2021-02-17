//
// Created by Антон Чапарин on 15.02.2021.
//

#include "HumanA.hpp"
#include <iostream>

const void HumanA::attack() const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, const Weapon &weapon) : name(name), weapon(weapon)
{
//	this->weapon = weapon;
//	this->name = name;
}
