//
// Created by Skipjack Adolph on 3/22/21.
//

#include "Span.hpp"
#include <iostream>

Span::Span() { }

Span::Span(unsigned int n) {
	list = std::list<int>(n);
}

Span::~Span() { }

Span::Span(const Span &other) {
		*this = other;
}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->list = other.list;
	}
	return *this;
}

void Span::addNumber(int newN) {
	std::list<int>::iterator it = std::find(list.begin(), list.end(), newN);

	if (it != list.end())
		throw NumAlreadyPresent();
	list.push_back(newN);
}

size_t Span::longestSpan() {
	if (list.size() < 2)
		throw NothingToCompare();

	std::list<int>::iterator min = std::min_element(list.begin(), list.end());
	std::list<int>::iterator max = std::max_element(list.begin(), list.end());

	return *max - *min;
}

size_t Span::shortestSpan() {
	if (list.size() < 2)
		throw NothingToCompare();

	std::list<int>::iterator itFirst = list.begin();
	std::list<int>::iterator itSecond = list.begin()++;

	size_t diff = 0;
	size_t curr;
	while (itSecond != list.end()) {
		if ((curr = std::abs(*itFirst - *itSecond)) < diff)
			diff = curr;
		}
	return diff;
}

void Span::printSpan() {
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		std::cout << *it << std::endl;
	}
}
