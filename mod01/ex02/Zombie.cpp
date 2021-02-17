//
// Created by Антон Чапарин on 14.02.2021.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &name, const std::string &type)
{
	this->name = name;
	this->type = type;
}

Zombie::Zombie() : type(std::string()), name(std::string()) { }

Zombie::~Zombie() { }

void Zombie::announce()
{
	std::cout << "<" << name << "(" << type << ")> Braiiiiiiinnnssss...\n";
}

std::string Zombie::chooseRandomName()
{
	std::string nameList[10] =
			{
					"Bill",
					"Sadie",
					"Gloria",
					"Ken",
					"Hue",
					"Jimmy",
					"Annabel",
					"Jack",
					"Rob",
					"Wendy"
			};

	return (nameList[rand() % 10]);
}

std::string Zombie::getName()
{
	return (name);
}

std::string Zombie::getType()
{
	return (type);
}
