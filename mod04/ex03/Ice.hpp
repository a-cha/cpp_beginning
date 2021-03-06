//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //EX03_ICE_HPP
