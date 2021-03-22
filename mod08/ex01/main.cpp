
#include "Span.hpp"
#include "print.hpp"
#include <list>
#include <vector>
#define INSERT_LEN 11

int		main() {
	srand(time(nullptr));

	std::cout << GREEN BOLD "Test constructors" STD << std::endl;
	std::cout << BOLD "Default + addNumber" STD << std::endl;
	Span span(2);
	try {
		span.addNumber(5231);
		span.addNumber(10432);
		span.addNumber(-12123);
		span.addNumber(-12123);
		span.addNumber(8);
	} catch (std::exception & exc) {
		std::cout << RED << exc.what() << STD << std::endl;
	}
	span.printSpan();

	std::cout << std::endl;
	std::cout << BOLD "Assignation operator" STD << std::endl;
	Span span1 = Span(1);
	span1.printSpan();
	try {
		span1.longestSpan();
	} catch (std::exception & exc) {
		std::cout << RED << exc.what() << STD << std::endl;
	}

	std::cout << std::endl;
	std::cout << BOLD "Copy constructor" STD << std::endl;
	Span span2(span);
	span2.printSpan();

	std::cout << std::endl << GREEN BOLD "Test insert" STD << std::endl;
	std::vector<int> myVector(INSERT_LEN);
	for (std::vector<int>::size_type i = 0; i < myVector.size(); i++) {
		myVector[i] = rand() % 10000;
	}
	std::cout << "Span len before insert: " << span.getSize() << std::endl;
	span.addNumber(myVector.begin(), myVector.end());
	std::cout << "Inserting 11000 nodes..." << std::endl;
	std::cout << "Span len after insert: " << span.getSize() << std::endl;
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span.longestSpan() << std::endl;
//	span.printSpan();

	return 0;
}
