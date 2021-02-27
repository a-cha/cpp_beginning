//
// Created by Skipjack Adolph on 2/18/21.
//

#ifndef EX01_NINJATRAP_HPP
#define EX01_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class NinjaTrap : public ClapTrap
{
public:
	explicit NinjaTrap(const std::string& name);
	virtual ~NinjaTrap();

	void ninjaShoebox(ClapTrap & target);
	void ninjaShoebox(ScavTrap & target);
	void ninjaShoebox(FragTrap & target);
	void ninjaShoebox(NinjaTrap & target);
};


#endif //EX01_NINJATRAP_HPP
