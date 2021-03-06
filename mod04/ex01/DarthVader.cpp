//
// Created by Антон Чапарин on 05.03.2021.
//

#include "DarthVader.hpp"
#include <iostream>

DarthVader::DarthVader() : Enemy(200, "DarthVader")
{
	std::cout << "* You don’t know the power of the dark side *" << std::endl;
}

DarthVader::DarthVader(const DarthVader &other) : Enemy(other)
{
	std::cout << "* You don’t know the power of the dark side *" << std::endl;
}

DarthVader::~DarthVader()
{
	std::cout << "* It was said that you would destroy the Sith, not join them! *" << std::endl;
}

void DarthVader::takeDamage(int damage)
{
	reduceHP(damage - 5);
}
