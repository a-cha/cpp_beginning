//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
class	ICharacter;
#include <string>

class AMateria
{
private:
	unsigned int	_xp;
	std::string		type;

public:
	AMateria();
	explicit AMateria(std::string const & type);
	AMateria(const AMateria &other);
	virtual ~AMateria();

	AMateria &operator=(const AMateria &other);

	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //AMATERIA_HPP
