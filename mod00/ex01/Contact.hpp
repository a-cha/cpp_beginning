//
// Created by Антон Чапарин on 11.02.2021.
//

#ifndef C___MODULE_CLASSNAME_HPP
#define C___MODULE_CLASSNAME_HPP

#include <string>

#define FIELDS_AMOUNT (11)

class Contact
{
protected:
	int 				id;
	std::string			info[FIELDS_AMOUNT];
	static std::string	fieldsName[FIELDS_AMOUNT];
public:
	Contact();
	~Contact();
	void fillInfo(int index);
	void printShortInfo() const;
	void printAllInfo() const;
};

#endif //C___MODULE_CLASSNAME_HPP
