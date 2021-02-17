//
// Created by Антон Чапарин on 14.02.2021.
//

#include "PhoneBook.hpp"
#include "print.hpp"

PhoneBook::PhoneBook()
{
	contactsCount = 0;
}

PhoneBook::~PhoneBook() { }

void PhoneBook::addNewContact()
{
	if (contactsCount != MAX_CONTACTS)
	{
		std::cout << BOLD "Let's create a new contact...\n" STD;
		contactsList[contactsCount].fillInfo(contactsCount);
		contactsCount++;
		std::cout << BOLD "New contact saved!\n" STD;
	}
	else
		std::cout << RED "CrappyPhoneBook has reached "
						 "the maximum number of contacts" STD << std::endl;
}

bool PhoneBook::getIndex(int *chosenIndex)
{
	long double index;

	std::cout <<
		"Enter the " BLUE "index " STD "of the contact you need:\n"
		"> ";
	std::cin >> std::get_money(index);
	*chosenIndex = (int)index;
	return (std::cin.fail());
}

void PhoneBook::searchContact()
{
	int chosenIndex;

	if (contactsCount > 0)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" <<  std::setw(11) << "Index|";
		std::cout <<  std::setw(11) << "First Name|";
		std::cout <<  std::setw(11) << "Last Name|";
		std::cout <<  std::setw(11) << "Nickname|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (int i = 0; i < contactsCount; i++)
			contactsList[i].printShortInfo();
		std::cout << "---------------------------------------------" << std::endl;
		while (getIndex(&chosenIndex) || chosenIndex > contactsCount || chosenIndex < 1)
		{
			std::cout << RED "Error input\n" STD;
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		std::cout << BOLD "Info by index #" << chosenIndex << STD << std::endl;
		contactsList[chosenIndex - 1].printAllInfo();
	}
	else
		std::cout << RED "There are no contacts yet" STD << std::endl;
}
