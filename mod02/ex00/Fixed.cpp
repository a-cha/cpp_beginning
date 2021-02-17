//
// Created by Skipjack Adolph on 2/17/21.
//

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &copyFrom)
{
	std::cout << "Copy constructor called\n";
	*this = copyFrom;
}

Fixed &Fixed::operator=(const Fixed &copyFrom)
{
	std::cout << "Assignation operator called\n";
	if (this != &copyFrom)
		this->rawBits = copyFrom.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return rawBits;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->rawBits = raw;
}
