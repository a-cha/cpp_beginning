//
// Created by Антон Чапарин on 04.03.2021.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
	std::string name;
public:
	explicit Victim(const std::string& name);
	Victim(const Victim& other);
	virtual ~Victim();

	Victim& operator=(const Victim& other);

	virtual void getPolymorphed() const;
	std::string getName() const;
};

std::ostream& operator<<(std::ostream& os, const Victim& other);

#endif //EX00_VICTIM_HPP
