//
// Created by Антон Чапарин on 14.02.2021.
//
#include "Pony.hpp"
#include <iostream>

Pony::Pony(const std::string &name, const std::string &placeToBe)
{
	this->name = name;
	this->placeToBe = placeToBe;
	std::cout << "I'm " << this->name << " and I'm chilling on the " << this->placeToBe << std::endl;
}

Pony::~Pony()
{
	std::cout << "I'm tired on being on the " << this->placeToBe << ". Bye! (c)" << this->name << std::endl;
}

void Pony::phrase()
{
	std::cout << "Love this place, but...\n";
}
