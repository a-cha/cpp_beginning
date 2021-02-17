//
// Created by Skipjack Adolph on 2/17/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <string>

class FragTrap
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
public:
	explicit FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	virtual ~FragTrap();

	FragTrap& operator=(const FragTrap& other);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_HPP
