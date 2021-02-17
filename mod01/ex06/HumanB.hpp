//
// Created by Антон Чапарин on 15.02.2021.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(const std::string& name);
	void attack();
	void setWeapon(Weapon &weapon);
};


#endif //EX06_HUMANB_HPP
