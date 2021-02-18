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
		std::cout << "FR4G-TP <" << this->name << "> still alive with <" <<
				  this->hitPoints  << "> hit points" << std::endl;
	}
	else
	{
		hitPoints = 0;
		std::cout << "FR4G-TP <" << this->name << "> is about to die" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << "FR4G-TP <" << this->name << "> has been repaired for <" <<
			  amount << "> points" << std::endl;
}

std::string FragTrap::phrasesSet[FragTrap::phrasesNbr] =
{
	"Na!",
	"Poluchi!",
	"Sha kak dam!",
	"Lovi!",
	"Tibe kranty!"
};

void FragTrap::vaulthunterAttack(const std::string &target, const int damage)
{
	std::cout << "FR4G-TP <" << this->name << "> vaulthuntering attacks <" <<
			  target << ">, causing <" <<
			  damage << "> points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		srand(time(nullptr));
		std::cout << phrasesSet[rand() % 5] << std::endl;
		vaulthunterAttack(target, rand() % 25 + 10);
	}
	else
		std::cout << "FR4G-TP <" << this->name <<
				  "> hasn't enough energy points for VAULTHUNTER attack" << std::endl;
}
