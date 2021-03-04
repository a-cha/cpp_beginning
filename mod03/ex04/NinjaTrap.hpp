//
// Created by Skipjack Adolph on 2/18/21.
//

#ifndef EX01_NINJATRAP_HPP
#define EX01_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	explicit NinjaTrap(const std::string& name);
	virtual ~NinjaTrap();

	virtual void ninjaShoebox(ClapTrap & target);
};


#endif //EX01_NINJATRAP_HPP
