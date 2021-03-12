//
// Created by Skipjack Adolph on 3/12/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
public:
	Array();
	explicit Array(unsigned int n);
	Array(const Array &other);
	~Array();

	Array &operator=(const Array &other);
	T & operator[](unsigned int i);

	const unsigned int &size();

	class NoElemInSuchIndex : public std::exception { const char * what() const throw(); };

private:
	T *				array;
	unsigned int	lenArray;
};

template<typename T>
const char *Array<T>::NoElemInSuchIndex::what() const throw()
{
	return "No elem in such index (out of bounds)";
}

template<typename T>
Array<T>::Array() :
	lenArray(0)
{
	array = nullptr;
}

template<typename T>
Array<T>::Array(unsigned int n) :
	lenArray(n)
{
	array = new T[n];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		this->lenArray = other.lenArray;
		this->array = new T[other.lenArray];
		for (int i = 0; i < this->lenArray; i++)
			this->array[i] = other->array[i];
	}
	return *this;
}

template<typename T>
Array<T>::Array(const Array &other)
{
	*this = other;
}

template<typename T>
Array<T>::~Array()
{
	delete [] array;
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i + 1 > lenArray)
		throw Array<T>::NoElemInSuchIndex();
	return array[i];
}

template<typename T>
const unsigned int &Array<T>::size()
{
	return lenArray;
}


#endif //EX02_ARRAY_HPP
