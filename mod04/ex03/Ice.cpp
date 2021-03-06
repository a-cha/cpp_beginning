//
// Created by Антон Чапарин on 05.03.2021.
//

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") { }

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
