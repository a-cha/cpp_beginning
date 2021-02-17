//
// Created by Антон Чапарин on 15.02.2021.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string type;
public:
	explicit Weapon(const std::string &type);
	Weapon();
	const std::string &getType() const;
	void setType(std::string newType);
};


#endif //EX06_WEAPON_HPP
