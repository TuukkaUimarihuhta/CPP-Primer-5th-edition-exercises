#include <iostream>

int e3_31() {

	//array with ten ints
	int ia[10];

	//if i is less than 10, ++i
	for (size_t i{ 0 }; i < 10; ++i)
	{
		//assign respective array element the number of its position
		ia[i] = i;
	}

	//for every element in array ia
	for (auto i : ia)
	{
		//print elements
		std::cout << i << " ";
	}
	return 0;
}