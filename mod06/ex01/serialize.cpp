//
// Created by Skipjack Adolph on 3/19/21.
//

#include "serialize.hpp"
#include <iostream>

#define STR_LEN 10

void * serialize()
{
	Data	*res = new Data;

	for (int i = 0; i < STR_LEN; i++)
		res->s1 += rand() % 26 + 'a';
	res->i = rand();
	for (int i = 0; i < STR_LEN; i++)
		res->s2 += rand() % 26 + 'a';
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
