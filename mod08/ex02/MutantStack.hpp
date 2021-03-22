//
// Created by Skipjack Adolph on 3/22/21.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();
};

#include "MutantStack.ipp"


#endif //EX02_MUTANTSTACK_HPP
