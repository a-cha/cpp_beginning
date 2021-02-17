//
// Created by Антон Чапарин on 14.02.2021.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	const Brain brain;
public:
	Human();
	~Human();
	const Brain &getBrain() const;
	std::string identify() const;
};


#endif //EX05_HUMAN_HPP
