//
// Created by Антон Чапарин on 04.03.2021.
//

#include "Unicorn.hpp"
#include <iostream>

Unicorn::Unicorn(const std::string& name) : Victim(name)
{
	std::cout << "A unicorn is just a horse with a point of view." << std::endl;;
}

Unicorn::~Unicorn()
{
	std::cout << "Because they have seen no unicorns for a while does not mean we have all vanished." << std::endl;;
}

void Unicorn::getPolymorphed() const
{
	std::cout << name << " hasn't turned, she was already a pink pony!" << std::endl;;
}
