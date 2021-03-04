//
// Created by Антон Чапарин on 04.03.2021.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
public:
	explicit Peon(const std::string& name);
	~Peon();

	void getPolymorphed() const;
};


#endif //EX00_PEON_HPP
