#include <iostream>
#include <vector>

int e3_23() {
	//int vector with 10 elements all valued at 24
	std::vector<int> ivec(10, 24);
	//for loop that iterates through all elements in ivec
	for (auto i = ivec.begin(); i != ivec.end(); i++)
	{
		//i is a deference to elements, double the value of elements
		*i = *i * 2;
		//print the vector, now all elements have 48 as values
		std::cout << *i << " ";
	}


	return 0;
}