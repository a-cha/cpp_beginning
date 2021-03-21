
#include "easyfind.hpp"
#include "print.hpp"
#include <vector>
#include <list>
#include <set>

int main() {
	std::vector<int> myVector(4);
	std::vector<int>::size_type sizeMyVector = myVector.size();

	std::cout << BOLD "Playing with vector" STD << std::endl;
	for (int i = 0; i < sizeMyVector; i++)
		myVector[i] = i + 1;
	myVector.push_back(5);
	myVector.push_back(6);
	myVector.push_back(7);

//	There is no possible operation (add extra values by iterator)
	sizeMyVector = myVector.size();
	std::vector<int>::iterator iter = myVector.end();
	for (int i = 0; i < 3; i++) {
		*iter = i + sizeMyVector;
		iter++;
	}

//	Change values & print them
	iter = myVector.begin();
	while (iter != myVector.end()) {
		*iter = *iter - 3;
		std::cout << *iter << std::endl;
		iter++;
	}

	try {
		std::cout << std::endl << BOLD "Testing easyfind" STD << std::endl;
		std::cout << *easyfind(myVector, 2) << std::endl;
		std::cout << *easyfind(myVector, 0) << std::endl;
		std::cout << *easyfind(myVector, -1) << std::endl;
		std::cout << *easyfind(myVector, 100) << std::endl;
		std::cout << *easyfind(myVector, 1) << std::endl;
	}
	catch (std::exception & exc) {
		std::cout << RED << exc.what() << STD << std::endl;
	}


	return 0;
}
