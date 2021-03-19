//
// Created by Skipjack Adolph on 3/19/21.
//

#ifndef EX01_SERIALIZE_HPP
#define EX01_SERIALIZE_HPP

#include <string>

typedef struct	s_data
{
	std::string s1;
	int 		i;
	std::string s2;
}				Data;

void	*serialize();
Data	*deserialize(void * raw);

#endif //EX01_SERIALIZE_HPP
