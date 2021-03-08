//
// Created by Skipjack Adolph on 2/18/21.
//

#include "NinjaTrap.hpp"
#include "print.hpp"

NinjaTrap::NinjaTrap(const std::string &name)
{
	std::cout << PURPLE "NinjaTrap" STD << " has constructed\n";
	this->name = name;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << PURPLE "NinjaTrap" STD << " has destructed\n";
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "Mmm, that's Parent here! Hi, " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "Mmm, that's ScavTrap! Hi, " <<
			  PURPLE << target.getName() << STD << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "Mmm, that's FragTrap! Hi, " <<
			  PURPLE << target.getName() << STD << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "Mmm, that's my ninja bro! Hi, " <<
			  PURPLE << target.getName() << STD << std::endl;
}
