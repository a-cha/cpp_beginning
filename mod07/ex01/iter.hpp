//
// Created by Skipjack Adolph on 3/12/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include <iostream>

template<typename T>
void	printElem(T const & elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void	iter(T * array, const size_t & len, void (*foo)(T const & elem))
{
	for (size_t i = 0; i < len; i++)
		foo(array[i]);
}

#endif //EX01_ITER_HPP
