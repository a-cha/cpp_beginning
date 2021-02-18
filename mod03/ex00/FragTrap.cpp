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
	std::cout << BLUE "FR4G-TP <" << this->name << ">" STD <<
			  " attacks <" BLUE << target << STD "> at range, causing <" <<
			  RED << this->rangedAttackDamage << STD << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << BLUE "FR4G-TP <" << this->name << ">" STD <<
			  " attacks melee <" BLUE << target << STD ">, causing <" <<
			  RED << this->meleeAttackDamage << STD << "> points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		if (armorDamageReduction < amount)
			this->hitPoints -= (amount - armorDamageReduction);
		std::cout << BLUE "FR4G-TP <" << this->name << ">" STD << " still alive with <" <<
				  GREEN << this->hitPoints << STD "> hit points" << std::endl;
	}
	else
	{
		hitPoints = 0;
		std::cout << BLUE "FR4G-TP <" << this->name << ">" STD <<
				  RED " is about to die" STD << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << BLUE "FR4G-TP <" << this->name << ">" STD <<
			  " has been repaired for <" GREEN << amount << STD "> points" << std::endl;
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
		std::cout << "FR4G-TP <" << this->name <<
				  "> hasn't enough energy points for VAULTHUNTER attack" << std::endl;
}
