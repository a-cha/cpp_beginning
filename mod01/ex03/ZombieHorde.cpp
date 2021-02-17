//
// Created by Антон Чапарин on 14.02.2021.
//

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
	num = n;
	zombieHorde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombieHorde[i].setType(type);
		zombieHorde[i].setName(Zombie::chooseRandomName());
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] zombieHorde;
	std::cout << "Horde of zombies deleted\n";
}

void ZombieHorde::announce()
{
	for (int i = 0; i < num; i++)
		zombieHorde[i].announce();
}
