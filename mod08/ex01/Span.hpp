//
// Created by Skipjack Adolph on 3/22/21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <set>
#include <list>

class Span {
public:
	Span(unsigned int n);
	Span(const Span & other);
	virtual ~Span();

	Span & operator=(const Span & other);

	std::list<int>::size_type getSize();

	void addNumber(int newN);
	size_t longestSpan();
	size_t shortestSpan();
	void	printSpan();

	template<class InputIterator>
	void addNumber(InputIterator first, InputIterator last);

	class ArrayIsFull : public std::exception {
		virtual const char * what() const throw() { return "Unable to add so much elements (out of max size)"; }
	};
	class NumAlreadyPresent : public std::exception {
		virtual const char * what() const throw() { return "The number is already present"; }
	};
	class NothingToCompare : public std::exception {
		virtual const char * what() const throw() { return "There are no numbers to compare"; }
	};

private:
	Span() {};
	std::list<int>	list;
	size_t			maxLen;
};

#include "Span.ipp"


#endif //EX01_SPAN_HPP
