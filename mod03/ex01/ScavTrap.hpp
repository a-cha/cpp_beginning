//
// Created by Skipjack Adolph on 2/18/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <string>

class ScavTrap
{
private:
	std::string	 name;
	unsigned int hitPoints;
	unsigned int maxHitPoints;
	unsigned int energyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	unsigned int meleeAttackDamage;
	unsigned int rangedAttackDamage;
	unsigned int armorDamageReduction;

	static const int phrasesNbr = 5;
	static std::string phrasesSet[ScavTrap::phrasesNbr];
public:
	explicit ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	virtual ~ScavTrap();

	ScavTrap& operator=(const ScavTrap& other);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};



#endif //EX01_SCAVTRAP_HPP
