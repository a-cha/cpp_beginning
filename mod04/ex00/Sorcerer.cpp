//
// Created by Антон Чапарин on 04.03.2021.
//

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(const std::string& name, const std::string& title) :
		name(name),
		title(title)
{
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
	*this = other;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->title = other.title;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Sorcerer &other)
{
	os << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!\n";
	return os;
}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::string Sorcerer::getName() const
{
	return name;
}

std::string Sorcerer::getTitle() const
{
	return title;
}
