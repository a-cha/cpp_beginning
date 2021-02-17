//
// Created by Антон Чапарин on 14.02.2021.
//

#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string	type;
	Zombie		*zombieHorde;
	int			num;
public:
	explicit ZombieHorde(int n);
	~ZombieHorde();
	void announce();
};


#endif //EX03_ZOMBIEHORDE_HPP
