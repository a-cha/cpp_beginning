#include <iostream>
#include <vector>
#include <list>
#include <set>

int main()
{
	std::vector<int> myVector(10);
	std::vector<int>::size_type sizeMyVector = myVector.size();

	for (int i = 0; i < sizeMyVector; i++)
		myVector[i] = i + 1;


	std::cout << "Hello, World!" << std::endl;
	return 0;
}
