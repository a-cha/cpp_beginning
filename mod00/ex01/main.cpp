//
// Created by Антон Чапарин on 11.02.2021.
//
#include "PhoneBook.hpp"
#include "print.hpp"

int		main()
{
	std::string chosenCommand;
	PhoneBook	phoneBook;

	std::cout << BOLD
		"**************************************************************\n"
		"Welcome to " BLUE "CrappyPhoneBook" STD BOLD " app!\n"
		"You can add & save up to 8 contacts and view them in the app\n"
		"**************************************************************\n" STD;
	while (true)
	{
		std::cout <<
					"Enter the command: "
			GREEN	"ADD" STD ", " GREEN "SEARCH" STD " or " GREEN "EXIT\n"
			STD		"> ";
		std::cin >> chosenCommand;
		if (chosenCommand == "ADD")
			phoneBook.addNewContact();
		else if (chosenCommand == "SEARCH")
			phoneBook.searchContact();
		else if (chosenCommand == "EXIT")
		{
			std::cout << BOLD "Bye!\n" STD;
			break ;
		}
		else
			std::cout << RED "Wrong command\n" STD;
	}
	return (0);
}
