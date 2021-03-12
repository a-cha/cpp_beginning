
#include "iter.hpp"
#include <iostream>

int		main()
{
	int tabInt [] = {1, 2, 3, 4, 5};
	char tabChar [] = {'1', '2', '3', '4', '5'};

	iter(tabInt, 5, printElem);
	std::cout << std::endl;
	iter(tabChar, 5, printElem);

	return 0;
}
