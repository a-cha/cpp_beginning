//
// Created by Антон Чапарин on 04.03.2021.
//

#include "WachowskiBrother.hpp"
#include <iostream>

WachowskiBrother::WachowskiBrother(const std::string& name) : Victim(name)
{
	std::cout << "The Matrix has you..." << std::endl;;
}

WachowskiBrother::~WachowskiBrother()
{
	std::cout << "Time is always against us." << std::endl;;
}

void WachowskiBrother::getPolymorphed() const
{
	std::cout << name << " has been turned into a sister Lana Wachowski!" << std::endl;;
}
