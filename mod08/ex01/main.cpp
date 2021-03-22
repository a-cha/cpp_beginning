#include <iostream>
#include <list>

int main() {
	std::list<int> myList;
	myList.insert(myList.begin(), 10, 5);

	for (std::list<int>::iterator it = myList.begin(); it != myList.end(); it++) {
		std::cout << *it << std::endl;
	}
	return 0;
}
