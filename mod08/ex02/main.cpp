//
// Created by Skipjack Adolph on 3/22/21.
//

#include "MutantStack.hpp"
#include <iostream>

int main() {
	MutantStack<int> mutant;

	for (int i = 0; i < 5; i++) {
		mutant.push(i * 10);
	}
	MutantStack<int>::iterator it = mutant.begin();
	for (int i = 0; i < mutant.size(); i++) {
		std::cout << *it << std::endl;
		it++;
	}
	return 0;
}
