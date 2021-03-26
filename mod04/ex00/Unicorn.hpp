//
// Created by Антон Чапарин on 04.03.2021.
//

#ifndef EX00_UNICORN_HPP
#define EX00_UNICORN_HPP

#include "Victim.hpp"

class Unicorn : public Victim
{
public:
	explicit Unicorn(const std::string& name);
	virtual ~Unicorn();

	void getPolymorphed() const;
};


#endif //EX00_UNICORN_HPP
