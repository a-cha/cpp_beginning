//
// Created by Skipjack Adolph on 2/18/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
private:
	static const int phrasesNbr = 5;
	static std::string phrasesSet[ScavTrap::phrasesNbr];
	void challengeMessage(const std::string &target);
public:
	explicit ScavTrap(const std::string& name);
	virtual ~ScavTrap();

	void challengeNewcomer(std::string const & target);
};



#endif //EX01_SCAVTRAP_HPP
