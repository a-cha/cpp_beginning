//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &other);
	~RadScorpion();
};


#endif //EX01_SUPERMUTANT_HPP
