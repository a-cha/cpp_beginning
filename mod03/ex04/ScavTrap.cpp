//
// Created by Skipjack Adolph on 2/18/21.
//

#include "ScavTrap.hpp"
#include "print.hpp"

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << BLUE "ScavTrap" STD << " has constructed\n";
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
	std::cout << BLUE "ScavTrap" STD << " has destructed\n";
}

std::string ScavTrap::phrasesSet[ScavTrap::phrasesNbr] =
		{
				"2 + 2",
				"5 + 3",
				"4 + 1",
				"2 * 3",
				"10 * 0.1"
		};

void ScavTrap::challengeMessage(const std::string &target)
{
	std::cout << BLUE "ScavTrap <" << this->name << ">" STD <<
		" challenges newcomer <" BLUE << target << STD ">..." << std::endl;
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string input;

	challengeMessage(target);
	std::cout << "How much is ";
	std::cout << phrasesSet[rand() % 5] << ":" << std::endl << "> ";
	std::getline(std::cin, input);
	std::cout << "Sorry, I can't count... So I'll trust your answer is right, " <<
				BLUE << target << STD << std::endl;
}
