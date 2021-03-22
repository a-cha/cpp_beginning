
#include "easyfind.hpp"
#include "print.hpp"
#include <vector>
#include <list>

int main() {
	{
		std::vector<int> myVector(4);
		std::vector<int>::size_type sizeMyVector = myVector.size();

		std::cout << BOLD "Playing with " BLUE "vector" STD << std::endl;
		for (std::vector<int>::size_type i = 0; i < sizeMyVector; i++)
			myVector[i] = i + 1;
		myVector.push_back(5);
		myVector.push_back(6);
		myVector.push_back(7);

//		This is no possible operation (add extra values by iterator .end()++)
		sizeMyVector = myVector.size();
		std::vector<int>::iterator iter = myVector.end();
		for (int i = 0; i < 3; i++) {
			*iter = i + sizeMyVector;
			iter++;
		}

//		Change values & print them
		iter = myVector.begin();
		while (iter != myVector.end()) {
			*iter = *iter - 3;
			std::cout << *iter << std::endl;
			iter++;
		}

		try {
			std::cout << BOLD "Testing " GREEN "easyfind " STD BOLD "with vector" STD << std::endl;
			std::cout << *easyfind(myVector, 2) << std::endl;
			std::cout << *easyfind(myVector, 0) << std::endl;
			std::cout << *easyfind(myVector, -1) << std::endl;
			std::cout << *easyfind(myVector, 100) << std::endl;
			std::cout << *easyfind(myVector, 1) << std::endl;
		} catch (std::exception &exc) {
			std::cerr << RED << exc.what() << STD << std::endl;
		}
	}

	{
		std::list<int> myList(2);
		std::list<int>::size_type sizeMyList = myList.size();

		std::cout << std::endl << BOLD "Playing with " BLUE "list" STD
				  << std::endl;
//		for (int i = 0; i < sizeMyVector; i++)
//			myList[i] = i + 1;
		myList.push_back(5);
		myList.push_back(6);
		myList.push_back(7);

		std::list<int>::iterator iter = myList.end();
//		It is "overflow" here (cause list - circular doubly linked list)
		sizeMyList = myList.size();
		for (int i = 0; i < 3; i++) {
			*iter = i + sizeMyList;
			iter++;
		}

//		Change values & print them
		iter = myList.begin();
		while (iter != myList.end()) {
			*iter = *iter - 3;
			std::cout << *iter << std::endl;
			iter++;
		}

		try {
			std::cout << BOLD "Testing " GREEN "easyfind " STD BOLD "with list" STD << std::endl;
			std::cout << *easyfind(myList, 0) << std::endl;
			std::cout << *easyfind(myList, 6) << std::endl;
			std::cout << *easyfind(myList, -3) << std::endl;
			std::cout << *easyfind(myList, 100) << std::endl;
			std::cout << *easyfind(myList, 1) << std::endl;
		} catch (std::exception &exc) {
			std::cerr << RED << exc.what() << STD << std::endl;
		}
	}

	return 0;
}
