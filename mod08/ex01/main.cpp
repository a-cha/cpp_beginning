
#include "Span.hpp"
#include "print.hpp"
#include <list>
#include <vector>
#define INSERT_LEN 100000

int     randNumberGenerator() { return rand() ; }

int		main() {
	srand(time(nullptr));

	{
		Span sp = Span(5);
		try {
			std::cout << GREEN BOLD "Sbj tests" STD << std::endl;
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(15);
		} catch (std::exception & exc) {
			std::cout << RED << exc.what() << STD << std::endl;
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << GREEN BOLD "Test constructors" STD << std::endl;
		std::cout << BOLD "Default + addNumber" STD << std::endl;
		Span span(5);
		try {
			span.addNumber(5231);
			span.addNumber(10432);
			span.addNumber(-12123);
			span.addNumber(-12123);
			span.addNumber(8);
		} catch (std::exception &exc) {
			std::cout << RED << exc.what() << STD << std::endl;
		}
		span.printSpan();

		std::cout << BOLD "Assignation operator" STD << std::endl;
		Span span1 = Span(1);
		span1.printSpan();
		try {
			span1.longestSpan();
		} catch (std::exception &exc) {
			std::cout << RED << exc.what() << STD << std::endl;
		}

		std::cout << BOLD "Copy constructor" STD << std::endl;
		Span span2(span);
		span2.printSpan();
	}
	{
		std::cout << std::endl << GREEN BOLD "Test insert" STD << std::endl;
		try {
			Span span(INSERT_LEN + 8);
			span.addNumber(5);
			span.addNumber(-20);
			span.addNumber(15);
			std::cout << "Span len before insert: " << span.getSize() << std::endl;
			std::cout << "Inserting " << INSERT_LEN << " nodes..." << std::endl;
            span.addNumber(INSERT_LEN, randNumberGenerator);
			std::cout << "Span len after insert: " << span.getSize()
					  << std::endl;
			std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
			std::cout << "Longest span: " << span.longestSpan() << std::endl;
//	    	span.printSpan();
		} catch (std::exception &exc) {
			std::cout << RED << exc.what() << STD << std::endl;
		}
	}
	return 0;
}
