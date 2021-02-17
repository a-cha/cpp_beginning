//
// Created by Антон Чапарин on 15.02.2021.
//

#include "StringSed.hpp"

StringSed::StringSed(const std::string &s1, const std::string &s2)
{
	origPart = s1;
	replPart = s2;
}

void StringSed::replace(std::string &str)
{
	size_t i = 0;

	for (i = str.find(origPart, i); i != std::string::npos;
						i = str.find(origPart, i + origPart.length()))
		str.replace(i, origPart.length(), replPart);
}
