//
// Created by Антон Чапарин on 05.03.2021.
//

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") { }

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
