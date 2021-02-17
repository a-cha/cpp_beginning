//
// Created by Антон Чапарин on 14.02.2021.
//

#include "ZombieEvent.hpp"
#include <iostream>

#define ZOMBIE_NUM (3)

static void lunch(Zombie *pZombie1[ZOMBIE_NUM], Zombie *pZombie2[ZOMBIE_NUM]);
static void anotherTeam();

int main()
{
	ZombieEvent	event;
	Zombie		*pZombie1[ZOMBIE_NUM];
	Zombie		*pZombie2[ZOMBIE_NUM];

	std::cout << "- Pals, introduce yourself\n";
	event.setZombieType("freaky");
	for (int i = 0; i < ZOMBIE_NUM; i++)
		pZombie1[i] = event.randomChump();
	event.setZombieType("pretty");
	for (int i = 0; i < ZOMBIE_NUM; i++)
		pZombie2[i] = event.randomChump();
	lunch(pZombie1, pZombie2);
	for (int i = 0; i < ZOMBIE_NUM; i++)
		delete pZombie1[i];
	for (int i = 0; i < ZOMBIE_NUM; i++)
		delete pZombie2[i];
	std::cout << "- And what about the problem of fathers and children?\n";
	anotherTeam();
	return 0;
}

static void lunch(Zombie *pZombie1[ZOMBIE_NUM], Zombie *pZombie2[ZOMBIE_NUM])
{
	std::cout << "- Mmmm, time to lunch!\n";
	for (int i = 0; i < ZOMBIE_NUM; i++)
	{
		std::cout << pZombie1[i]->getType() << " " << pZombie1[i]->getName() <<
				  " not hungry at all\n";
		std::cout << pZombie2[i]->getType() << " " << pZombie2[i]->getName() <<
				  " not hungry at all\n";
	}
}

static void anotherTeam()
{
	Zombie zombie1("Chuck", "youngster");
	Zombie zombie2("Gary", "veteran");

	std::cout << "The " << zombie1.getType() << " " << zombie1.getName() <<
	" respects " << zombie2.getType() << " " << zombie2.getName() << std::endl;
}
