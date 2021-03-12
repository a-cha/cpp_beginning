
#include "whatever.hpp"
#include "print.hpp"
#include <iostream>

int main()
{
	std::cout << BOLD "Sbj tests" STD << std::endl;
	int a = 2, b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string s1 = "chaine1";
	std::string s2 = "chaine2";
	::swap(s1, s2);
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "min( s1, s2 ) = " << ::min( s1, s2 ) << std::endl;
	std::cout << "max( s1, s2 ) = " << ::max( s1, s2 ) << std::endl;

	std::cout << std::endl << BOLD "Test int" STD << std::endl;
	std::cout << GREEN "Values: a = " << a << ", b = " << b << STD << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min = " << min(a, b) << std::endl;
	std::cout << "Max = " << max(a, b) << std::endl;
	a = 2, b = 7;
	std::cout << GREEN "Values: a = " << a << ", b = " << b << STD << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min = " << min(a, b) << std::endl;
	std::cout << "Max = " << max(a, b) << std::endl;
	a = 0, b = 0;
	std::cout << GREEN "Values: a = " << a << ", b = " << b << STD<< std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min = " << min(a, b) << std::endl;
	std::cout << "Max = " << max(a, b) << std::endl;
	std::cout << "Addr a = " << &a << std::endl;
	std::cout << "Addr b = " << &b << std::endl;
	std::cout << "Addr of min return = " << &min(a, b) << std::endl;
	std::cout << "Addr of max return = " << &max(a, b) << std::endl;

	std::cout << std::endl << BOLD "Test double" STD << std::endl;
	double c = 4.5, d = 5.2;
	std::cout << GREEN "Values: c = " << c << ", d = " << d << STD << std::endl;
	swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "Min = " << min(c, d) << std::endl;
	std::cout << "Max = " << max(c, d) << std::endl;
	c = 2.1, d = 7.8;
	std::cout << GREEN "Values: c = " << c << ", d = " << d << STD << std::endl;
	swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "Min = " << min(c, d) << std::endl;
	std::cout << "Max = " << max(c, d) << std::endl;
	c = 0.0, d = 0.0;
	std::cout << GREEN "Values: c = " << c << ", d = " << d << STD<< std::endl;
	swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "Min = " << min(c, d) << std::endl;
	std::cout << "Max = " << max(c, d) << std::endl;
	std::cout << "Addr c = " << &c << std::endl;
	std::cout << "Addr d = " << &d << std::endl;
	std::cout << "Addr of min return = " << &min(c, d) << std::endl;
	std::cout << "Addr of max return = " << &max(c, d) << std::endl;

	return 0;
}
