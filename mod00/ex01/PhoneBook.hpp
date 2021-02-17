//
// Created by Антон Чапарин on 14.02.2021.
//

#ifndef EX01_PHONEBOOK_HPP
#define EX01_PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

#define MAX_CONTACTS (8)

class 			PhoneBook
{
private:
	int 		contactsCount;
	Contact		contactsList[MAX_CONTACTS];
	static bool	getIndex(int *chosenIndex);
public:
	PhoneBook();
	~PhoneBook();

	void addNewContact();
	void searchContact();
};


#endif //EX01_PHONEBOOK_HPP
