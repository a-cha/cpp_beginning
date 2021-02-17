//
// Created by Skipjack Adolph on 2/17/21.
//

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "Default constructor called\n";
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called\n";
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->maxHitPoints = other.maxHitPoints;
		this->energyPoints = other.energyPoints;
		this->maxEnergyPoints = other.maxEnergyPoints;
		this->level = other.level;
		this->meleeAttackDamage = other.meleeAttackDamage;
		this->rangedAttackDamage = other.rangedAttackDamage;
		this->armorDamageReduction = other.armorDamageReduction;
	}
	return *this;
}

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks <" <<
			  target << "> at range, causing <" <<
			  this->rangedAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP <" << this->name << "> attacks melee <" <<
			  target << ">, causing <" <<
			  this->meleeAttackDamage << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		if (armorDamageReduction < amount)
			this->hitPoints -= (amount - armorDamageReduction);
	}
	else
		hitPoints = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{

}
