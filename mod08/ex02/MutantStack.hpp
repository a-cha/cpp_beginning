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

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return std::begin(this->c);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return std::end(this->c);
}


#endif //EX02_MUTANTSTACK_HPP
