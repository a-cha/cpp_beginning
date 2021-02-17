//
// Created by Антон Чапарин on 11.02.2021.
//

#include "Contact.hpp"
#include "print.hpp"

std::string Contact::fieldsName[FIELDS_AMOUNT] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Login",
	"Postal Address",
	"Email Address",
	"Phone Number",
	"Birthday Date",
	"Favorite Meal",
	"Underwear Color",
	"Darkest Secret"
};

Contact::Contact()
{
	id = 0;
}

Contact::~Contact() { }

void Contact::printAllInfo() const
{
	for (int i = 0; i < FIELDS_AMOUNT; i++)
	{
		std::cout << BLUE << fieldsName[i] << ": " STD;
		std::cout << info[i] << std::endl;
	}
}

void Contact::printShortInfo() const
{
	std::cout << "|" BLUE << std::setw(10) << id << STD "|";
	for (int i = 0; i < 3; i++)
	{
		if (info[i].length() > 10)
			std::cout << info[i].substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << info[i] << "|";
	}
	std::cout << std::endl;
}

void Contact::fillInfo(int index)
{
	id = index + 1;
	for (int i = 0; i < FIELDS_AMOUNT; i++)
	{
		std::cout << "Contact's " << fieldsName[i] << ": \n"
		"> ";
//		TODO need to read the line with whitespaces
		std::cin >> info[i];
	}
}
