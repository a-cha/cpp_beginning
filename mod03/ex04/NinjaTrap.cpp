//
// Created by Skipjack Adolph on 2/18/21.
//

#include "NinjaTrap.hpp"
#include "print.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << BLUE "NinjaTrap" STD << " has constructed\n";
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
}

NinjaTrap::NinjaTrap(const std::string &name)
{
	std::cout << BLUE "NinjaTrap" STD << " has constructed\n";
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
	std::cout << BLUE "NinjaTrap" STD << " has destructed\n";
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << BLUE "<Ninja>" STD " warmly welcomed " << PURPLE << target.getName() << STD << std::endl;
}
