//
// Created by Skipjack Adolph on 3/22/21.
//

#include "MutantStack.hpp"
#include "print.hpp"
#include <list>

int main() {
	{
		std::cout << BOLD "Sbj tests my:" STD << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}
	{
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
	}
	return 0;
}
