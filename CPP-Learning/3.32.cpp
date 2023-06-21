#include <iostream>
#include <vector>

int e3_32() {
	
	//array with ten ints
	int ia[10];

	//if i is less than 10, ++i
	for (size_t i{ 0 }; i < 10; ++i)
	{
		//assign respective array element the number of its position
		ia[i] = i;
	}

	//copy array
	int copyIa[10];
	//count from 0 to 9
	for (size_t i{ 0 }; i < 10; ++i)
	{
		//copy the values for the elements
		copyIa[i] = ia[i];
	}

	//int vector with no elements
	std::vector<int> ivec;

	//count from 0 to 9
	for (int i = 0; i < 10; ++i)
		// push the values to vector, creating the lements in the process
		ivec.push_back(i);

	//copy the vector values and elements to another vector
	std::vector<int> ivec2(ivec);

	return 0;
}