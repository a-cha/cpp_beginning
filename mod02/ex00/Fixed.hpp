//
// Created by Skipjack Adolph on 2/17/21.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP


class Fixed
{
private:
	int rawBits;
	static const int fractBits = 8;
public:
	Fixed();
	Fixed(const Fixed &copyFrom);
	Fixed &operator=(const Fixed &copyFrom);
	virtual ~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
};


#endif //EX00_FIXED_HPP
