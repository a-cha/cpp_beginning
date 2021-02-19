//
// Created by Антон Чапарин on 14.02.2021.
//

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain()
{
	iq = 200;
}

Brain::~Brain() { }

std::string Brain::identify() const
{
	std::stringstream ss;

	ss << this;
	return (ss.str());
}
