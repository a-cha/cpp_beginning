//
// Created by Skipjack Adolph on 3/22/21.
//

#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int n) :
	maxLen(n) {
	list = std::list<int>();
}

Span::Span(const Span &other) {
		*this = other;
}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->maxLen = other.maxLen;
		this->list = other.list;
	}
	return *this;
}

Span::~Span() {
	list.clear();
}

void Span::addNumber(int newN) {
	if (maxLen == getSize())
		throw ArrayIsFull();
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

	list.sort();
	std::list<int>::iterator itFirst = list.begin();
	std::list<int>::iterator itSecond = ++list.begin();

	size_t diff = SIZE_T_MAX;
	size_t curr;
	while (itSecond != list.end()) {
		if ((curr = std::abs(*itFirst - *itSecond)) < diff)
			diff = curr;
		itFirst++;
		itSecond++;
	}
	return diff;
}

void Span::printSpan() {
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		std::cout << *it << std::endl;
	}
}

std::list<int>::size_type Span::getSize() {
	return list.size();
}
