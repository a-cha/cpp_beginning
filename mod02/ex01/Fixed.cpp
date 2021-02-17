//
// Created by Skipjack Adolph on 2/17/21.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	if (this != &other)
		this->rawBits = other.getRawBits();
	return *this;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->rawBits = value << fractBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	rawBits = (int)roundf(value * (1 << fractBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called\n";
	return rawBits;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	this->rawBits = raw;
}

int Fixed::toInt() const
{
	return rawBits >> fractBits;
}

float Fixed::toFloat() const
{
	return (float)rawBits / (1 << fractBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}
