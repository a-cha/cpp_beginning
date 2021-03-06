//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //EX03_CURE_HPP
