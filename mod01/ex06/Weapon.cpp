//
// Created by Антон Чапарин on 15.02.2021.
//

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->type = type;
}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

Weapon::Weapon() { }
