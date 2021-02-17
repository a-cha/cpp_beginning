//
// Created by Skipjack Adolph on 2/17/21.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int rawBits;
	static const int fractBits = 8;
public:
	Fixed();
	explicit Fixed(const int value);
	explicit Fixed(const float value);
	Fixed(const Fixed& other);
	virtual ~Fixed();

	Fixed& operator=(const Fixed& other);

	int getRawBits() const;
	void setRawBits(const int raw);
	int toInt() const;
	float toFloat() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif //EX00_FIXED_HPP
