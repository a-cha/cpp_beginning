//
// Created by Антон Чапарин on 04.03.2021.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include "Victim.hpp"
#include <string>
#include <iostream>

class Sorcerer
{
private:
	std::string name;
	std::string title;
public:
	Sorcerer(const std::string& name, const std::string& title);
	Sorcerer(const Sorcerer& other);
	~Sorcerer();

	Sorcerer& operator=(const Sorcerer& other);

	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &victim) const;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& other);

#endif //EX00_SORCERER_HPP
