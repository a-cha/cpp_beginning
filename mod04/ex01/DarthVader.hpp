//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX01_DARTH_HPP
#define EX01_DARTH_HPP

#include "Enemy.hpp"

class DarthVader : public Enemy
{
public:
	DarthVader();
	DarthVader(const DarthVader &other);
	~DarthVader();

	void takeDamage(int damage);
};


#endif //EX01_DARTH_HPP
