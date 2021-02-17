//
// Created by Антон Чапарин on 14.02.2021.
//

#include "Pony.hpp"
#include <iostream>

#define BOLD "\033[1m"
#define STD "\033[0m"

void ponyOnTheStack()
{
	Pony pony("Mary", "stack");
	Pony::phrase();
}

void ponyOnTheHeap()
{
	Pony *pony = new Pony("Jack", "heap");
	Pony::phrase();
	delete pony;
}

int main()
{
	std::cout << BOLD "Meet pony on the stack" STD << std::endl;
	ponyOnTheStack();
	std::cout << BOLD "Meet pony on the heap" STD << std::endl;
	ponyOnTheHeap();
	return 0;
}
