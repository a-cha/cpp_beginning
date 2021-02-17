//
// Created by Антон Чапарин on 14.02.2021.
//

#include "Human.hpp"

Human::Human() { }

Human::~Human() { }

const Brain &Human::getBrain() const
{
	return this->brain;
}

std::string Human::identify() const
{
	return this->getBrain().identify();
}
