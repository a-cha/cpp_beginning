
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "WachowskiBrother.hpp"
#include "Unicorn.hpp"
#include <iostream>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Unicorn bloom("Bloom");
	WachowskiBrother laurence("Laurence Wachowski");

	std::cout << robert << jim << joe << bloom << laurence;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bloom);
	robert.polymorph(laurence);
	return 0;
}
