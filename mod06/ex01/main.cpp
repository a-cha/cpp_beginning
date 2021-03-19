//
// Created by Skipjack Adolph on 3/19/21.
//

#include "deserialize.hpp"
#include <iostream>

void	*serialize();
Data	*deserialize(void * raw);

int		main()
{
	Data * data = reinterpret_cast<Data *>(serialize());

	std::cout << data->s1 << data->i << data->s2 << std::endl;
	return 0;
}
