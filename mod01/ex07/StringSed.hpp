//
// Created by Антон Чапарин on 15.02.2021.
//

#ifndef EX07_STRINGSED_HPP
#define EX07_STRINGSED_HPP

#include <string>

class StringSed
{
private:
	std::string origPart;
	std::string replPart;
public:
	StringSed(const std::string &s1, const std::string &s2);
	void replace(std::string &str);
};


#endif //EX07_STRINGSED_HPP
