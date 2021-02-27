//
// Created by Skipjack Adolph on 2/20/21.
//

#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	std::string	 name;
	unsigned int hitPoints;
	unsigned int maxHitPoints;
	unsigned int energyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	unsigned int meleeAttackDamage;
	unsigned int rangedAttackDamage;
	unsigned int armorDamageReduction;
public:
	ClapTrap();
	ClapTrap(const ClapTrap& other);
	~ClapTrap();
//	virtual ~ClapTrap();

	ClapTrap& operator=(const ClapTrap& other);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //EX01_CLAPTRAP_HPP
