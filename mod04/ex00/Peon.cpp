//
// Created by Антон Чапарин on 04.03.2021.
//

#include "Peon.hpp"
#include <iostream>

Peon::Peon(const std::string& name) : Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony!\n";
}
