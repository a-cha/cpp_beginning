//
// Created by Антон Чапарин on 14.02.2021.
//

#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP

#include <string>

class Brain
{
private:
	int iq;
public:
	Brain();
	~Brain();
	std::string identify() const;
};


#endif //EX05_BRAIN_HPP
