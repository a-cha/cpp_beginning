//
// Created by Skipjack Adolph on 2/20/21.
//

#include "ClapTrap.hpp"
#include "print.hpp"

ClapTrap::ClapTrap() :
hitPoints(),
maxHitPoints(),
energyPoints(),
maxEnergyPoints(),
level(),
meleeAttackDamage(),
rangedAttackDamage(),
armorDamageReduction()
{
	std::cout << BLUE "Parent ClapTrap" STD << " has constructed\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << BLUE "Parent ClapTrap" STD << " has destructed\n";
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << BLUE "<" << this->name << ">" STD <<
			  " attacks <" BLUE << target << STD "> at range, causing <" <<
			  RED << this->rangedAttackDamage << STD << "> points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << BLUE "<" << this->name << ">" STD <<
			  " attacks melee <" BLUE << target << STD ">, causing <" <<
			  RED << this->meleeAttackDamage << STD << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		if (armorDamageReduction < amount)
			this->hitPoints -= (amount - armorDamageReduction);
		std::cout << BLUE "<" << this->name << ">" STD << " still alive with <" <<
				  GREEN << this->hitPoints << STD "> hit points" << std::endl;
	}
	else
	{
		hitPoints = 0;
		std::cout << BLUE "<" << this->name << ">" STD <<
				  RED " is about to die" STD << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << BLUE "<" << this->name << ">" STD <<
			  " has been repaired for <" GREEN << amount << STD "> points" << std::endl;
}

std::string ClapTrap::getName()
{
	return name;
}
