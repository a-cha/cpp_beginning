
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "print.hpp"

Base * generate()
{
	if (rand() % 3 == 0)
	{
		std::cout << GREEN BOLD "Instance A created" STD << std::endl;
		return new A;
	}
	if (rand() % 3 == 1)
	{
		std::cout << GREEN BOLD "Instance B created" STD << std::endl;
		return new B;
	}
	else
	{
		std::cout << GREEN BOLD "Instance C created" STD << std::endl;
		return new C;
	}
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "It's " BOLD "A" STD << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "It's " BOLD "B" STD << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "It's " BOLD "C" STD << std::endl;
}

void identify_from_reference( Base & p)
{
	Base unused;
	try
	{
		unused = dynamic_cast<A &>(p);
		std::cout << "It's " BOLD "A" STD << std::endl;
	}
	catch (...) { }
	try
	{
		unused = dynamic_cast<B &>(p);
		std::cout << "It's " BOLD "B" STD << std::endl;
	}
	catch (...) { }
	try
	{
		unused = dynamic_cast<C &>(p);
		std::cout << "It's " BOLD "C" STD << std::endl;
	}
	catch (...) { }
}

int main()
{
	srand(time(nullptr));

	Base *p = generate();
	std::cout << BLUE "Identifying from reference..." STD << std::endl;
	identify_from_reference(*p);
	std::cout << BLUE "Identifying from pointer..." STD << std::endl;
	identify_from_pointer(p);
	return 0;
}
