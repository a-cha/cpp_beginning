//
// Created by Skipjack Adolph on 2/17/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
private:
	static const int phrasesNbr = 5;
	static std::string phrasesSet[FragTrap::phrasesNbr];
	void vaulthunterAttack(const std::string &target, const int damage);
public:
	FragTrap();
	explicit FragTrap(const std::string& name);
	~FragTrap();
//	virtual ~FragTrap();

	void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_HPP
