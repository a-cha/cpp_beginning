//
// Created by Антон Чапарин on 14.02.2021.
//

#include "ZombieHorde.hpp"
#include <iostream>
#define BOLD "\033[1m"
#define STD "\033[0m"

ZombieHorde::ZombieHorde(int n)
{
	num = n;
	zombieHorde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombieHorde[i].setType(type);
		zombieHorde[i].setName(Zombie::chooseRandomName());
	}
	std::cout << BOLD "Horde of zombies created\n" STD;
}

ZombieHorde::~ZombieHorde()
{
	delete [] zombieHorde;
	std::cout << BOLD "Horde of zombies deleted\n" STD;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < num; i++)
		zombieHorde[i].announce();
}
