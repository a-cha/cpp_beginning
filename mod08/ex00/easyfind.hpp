//
// Created by Skipjack Adolph on 3/21/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <algorithm>

class NotFound : public std::exception {
	virtual const char * what() const throw() { return ("Value not found"); }
};

template <typename T>
typename T::iterator easyfind(T & container, int n) {
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFound();
	return it;
}

#endif //EX00_EASYFIND_HPP
