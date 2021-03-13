//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jackie = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* rob = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISquad* vlcCopy;

	vlc->push(bob);
	vlc->push(jackie);
	vlc->push(jim);
	vlcCopy = vlc;
	vlcCopy->push(rob);
	for (int i = 0; i < vlcCopy->getCount(); ++i)
	{
		ISpaceMarine* cur = vlcCopy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete vlcCopy;

    return 0;
}
