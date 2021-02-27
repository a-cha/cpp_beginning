//
// Created by Skipjack Adolph on 2/18/21.
//

#include "SuperTrap.hpp"
#include "print.hpp"

SuperTrap::SuperTrap(const std::string &name)
{
	std::cout << PURPLE "SuperTrap" STD << " has constructed\n";
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->maxHitPoints = FragTrap::maxHitPoints;
	this->energyPoints = NinjaTrap::energyPoints;
	this->maxEnergyPoints = NinjaTrap::maxEnergyPoints;
	this->level = 1;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;
	this->armorDamageReduction = FragTrap::armorDamageReduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << PURPLE "SuperTrap" STD << " has destructed\n";
}

void SuperTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "Mmm, that's Parent here! Hi, dad!" << std::endl;
}

void SuperTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "Mmm, that's ScavTrap! Hi, " <<
			  PURPLE << target.getName() << STD << std::endl;
}

void SuperTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "Mmm, that's FragTrap! Hi, " <<
			  PURPLE << target.getName() << STD << std::endl;
}

void SuperTrap::ninjaShoebox(SuperTrap &target)
{
	std::cout << "Mmm, that's my ninja bro! Hi, " <<
			  PURPLE << target.getName() << STD << std::endl;
}

void SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}
