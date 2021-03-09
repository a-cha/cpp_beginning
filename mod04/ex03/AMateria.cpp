//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "AMateria.hpp"

//AMateria::AMateria() :
//	_xp(0),
//	type()
//{ }

AMateria::AMateria(const std::string &type) :
	_xp(0),
	type(type)
{ }

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		type = other.type;
		_xp = other._xp;
	}
	return *this;
}

std::string const &AMateria::getType() const
{
	return type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(__attribute__((unused)) ICharacter &target)
{
	_xp	+= 10;
}
