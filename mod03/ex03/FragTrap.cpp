//
// Created by Skipjack Adolph on 2/17/21.
//

#include "FragTrap.hpp"
#include "print.hpp"

FragTrap::FragTrap(const std::string &name)
{
	std::cout << BLUE "FR4G-TP" STD << " has constructed\n";
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
	std::cout << BLUE "FR4G-TP" STD << " has destructed\n";
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
	std::cout << BLUE "FR4G-TP <" << this->name << ">" STD <<
			  " vaulthuntering attacks <" BLUE << target << STD ">, causing <" <<
			  RED << damage << STD << "> points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << phrasesSet[rand() % 5] << std::endl;
		vaulthunterAttack(target, rand() % 10 + 10);
	}
	else
		std::cout << BLUE "FR4G-TP <" << this->name << ">" STD
				  " hasn't enough energy points for VAULTHUNTER attack" << std::endl;
}
