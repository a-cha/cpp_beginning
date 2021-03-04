//
// Created by Skipjack Adolph on 2/18/21.
//

#include "SuperTrap.hpp"
#include "print.hpp"

SuperTrap::SuperTrap(const std::string &name)
{
	std::cout << BLUE "SuperTrap" STD << " has constructed\n";
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
	std::cout << BLUE "SuperTrap" STD << " has destructed\n";
}

void SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::printAttrs()
{
	std::cout << hitPoints << std::endl;
	std::cout << maxHitPoints << std::endl;
	std::cout << energyPoints << std::endl;
	std::cout << maxEnergyPoints << std::endl;
	std::cout << level << std::endl;
	std::cout << meleeAttackDamage << std::endl;
	std::cout << rangedAttackDamage << std::endl;
	std::cout << armorDamageReduction << std::endl;
}
