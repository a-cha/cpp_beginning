//
// Created by Антон Чапарин on 15.02.2021.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	const Weapon &weapon;
	std::string name;
public:
	HumanA(const std::string& name, const Weapon &weapon);
	const void attack() const;
};


#endif //EX06_HUMANA_HPP
