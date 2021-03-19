//
// Created by Skipjack Adolph on 3/19/21.
//

#include "serialize.hpp"
#include <iostream>

void * serialize()
{
	Data		*res = new Data;

	res->s1 = "lol";
	res->i = 5;
	res->s2 = "kek";
	std::cout << "Serialize: " << std::endl
			  << "s1: " << res->s1 << std::endl
			  << "i: " << res->i << std::endl
			  << "s2: " << res->s2 << std::endl;
	return (reinterpret_cast<void *>(res));
}

Data * deserialize(void * raw)
{
	return (reinterpret_cast<Data *>(raw));
}
