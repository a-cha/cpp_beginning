//
// Created by Skipjack Adolph on 2/18/21.
//

#ifndef EX01_SUPERTRAP_HPP
#define EX01_SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>


class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	explicit SuperTrap(const std::string& name);
	virtual ~SuperTrap();

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void printAttrs();
};


#endif //EX01_SUPERTRAP_HPP
