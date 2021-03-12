//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include <string>

Squad::Squad() :
		marArray(nullptr),
		lenArray(0)
{ }

Squad::Squad(const Squad &other) :
		marArray(nullptr),
		lenArray(0)
{
	*this = other;
}

Squad::~Squad()
{
	if (this->marArray)
	{
		for (int i = 0; i < this->lenArray; i++)
			delete this->marArray[i];
		delete [] this->marArray;
	}
}

Squad & Squad::operator=(const Squad &other)
{
	if (this != &other)
	{
		if (this->marArray)
		{
			for (int i = 0; i < this->lenArray; i++)
				delete marArray[i];
			delete [] marArray;
		}
		if (other.marArray)
		{
			this->marArray = new ISpaceMarine*[other.lenArray];
			for (int i = 0; i < other.lenArray; i++)
				this->marArray[i] = other.marArray[i]->clone();
		}
		this->lenArray = other.lenArray;
	}
	return *this;
}

int Squad::getCount() const
{
	return lenArray;
}

ISpaceMarine * Squad::getUnit(int index) const
{
	if (index < 0 || index >= lenArray)
		return nullptr;
	return marArray[index];
}

int Squad::push(ISpaceMarine *elem)
{
	if (elem)
	{
		for (int i = 0; i < lenArray; i++)
			if (marArray[i] == elem)
				return lenArray;
		ISpaceMarine **newArr = new ISpaceMarine *[lenArray + 1];
		for (int i = 0; i < lenArray; ++i)
			newArr[i] = marArray[i];
		newArr[lenArray] = elem;
		lenArray++;
		delete [] marArray;
		marArray = newArr;
	}
	return lenArray;
}
