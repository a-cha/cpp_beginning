//
// Created by Skipjack Adolph on 3/22/21.
//

#include "MutantStack.hpp"
#include "print.hpp"

int main() {
	MutantStack<int> mutant;

	std::cout << BOLD "Create MutantStack" STD << std::endl;
	for (int i = 0; i < 5; i++) {
		mutant.push(i * 10);
	}
	std::cout << GREEN "Print from begin iterator" STD << std::endl;
	MutantStack<int>::iterator it = mutant.begin();
	for (int i = 0; i < mutant.size(); i++) {
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << GREEN "Remove 2 elems" STD << std::endl;
	mutant.pop();
	mutant.pop();
	std::cout << GREEN "Print from end iterator" STD << std::endl;
	it = mutant.end();
	for (int i = 0; i < mutant.size(); i++) {
		it--;
		std::cout << *it << std::endl;
	}
	return 0;
}
