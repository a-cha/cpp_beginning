//
// Created by Антон Чапарин on 04.03.2021.
//

#include "Victim.hpp"
#include <iostream>

Victim::Victim(const std::string& name) :
		name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::Victim(const Victim &other)
{
	*this = other;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

Victim &Victim::operator=(const Victim &other)
{
	if (this != &other)
	{
		this->name = other.name;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Victim &other)
{
	os << "I'm " << other.getName() << " and I like otters!\n";
	return os;
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!\n";
}

std::string Victim::getName() const
{
	return name;
}
