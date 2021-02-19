//
// Created by Антон Чапарин on 15.02.2021.
//

#include "HumanA.hpp"
#include <iostream>

void HumanA::attack() const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, const Weapon &weapon) : weapon(weapon), name(name) { }
