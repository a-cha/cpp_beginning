//
// Created by Антон Чапарин on 14.02.2021.
//

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() { }

Brain::~Brain() { }

std::string Brain::identify() const
{
	std::stringstream ss;
	long classAddr = (long)this;

	ss << "0x" << std::uppercase << std::hex << classAddr;
	return (ss.str());
}
