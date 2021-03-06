//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX01_JEDI_SWORD_HPP
#define EX01_JEDI_SWORD_HPP

#include "AWeapon.hpp"

class JediSword : public AWeapon
{
public:
	JediSword();
	void attack() const;
};


#endif //EX01_JEDI_SWORD_HPP
