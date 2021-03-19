//
// Created by Skipjack Adolph on 3/19/21.
//

#include "serialize.hpp"
#include <iostream>

int		main()
{
	srand(time(NULL));

	Data * data = deserialize(serialize());

	std::cout << std::endl << "Result:" << std::endl
			  << "s1: " << data->s1 << std::endl
			  << "i: " << data->i << std::endl
			  << "s2: " << data->s2 << std::endl;
	delete data;
	return 0;
}
