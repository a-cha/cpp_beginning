//
// Created by Skipjack Adolph on 2/18/21.
//

#include "ScavTrap.hpp"
#include "print.hpp"

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << PURPLE "Claptrap" STD << " has constructed\n";
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << PURPLE "Claptrap" STD << " has destructed\n";
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << PURPLE "Claptrap <" << this->name << ">" STD <<
			  " attacks <" PURPLE << target << STD "> at range, causing <" <<
			  RED << this->rangedAttackDamage << STD << "> points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << PURPLE "Claptrap <" << this->name << ">" STD <<
			  " attacks melee <" PURPLE << target << STD ">, causing <" <<
			  RED << this->meleeAttackDamage << STD << "> points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		if (armorDamageReduction < amount)
			this->hitPoints -= (amount - armorDamageReduction);
		std::cout << PURPLE "Claptrap <" << this->name << ">" STD << " still alive with <" <<
				  GREEN << this->hitPoints << STD "> hit points" << std::endl;
	}
	else
	{
		hitPoints = 0;
		std::cout << PURPLE "Claptrap <" << this->name << ">" STD <<
				  RED " is about to die" STD << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << PURPLE "Claptrap <" << this->name << ">" STD <<
			  " has been repaired for <" GREEN << amount << STD "> points" << std::endl;
}

std::string ScavTrap::phrasesSet[ScavTrap::phrasesNbr] =
		{
				"2 + 2",
				"5 + 3",
				"4 + 1",
				"2 * 3",
				"10 * 0.1"
		};

void ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string input;

	std::cout << "How much is ";
	std::cout << phrasesSet[rand() % 5] << ":" << std::endl << "> ";
	std::getline(std::cin, input);
	std::cout << "Sorry, I can't count... So I'll trust your answer is right, " <<
				PURPLE << target << STD << std::endl;
}
