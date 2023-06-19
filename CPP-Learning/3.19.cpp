#include <iostream>
#include <string>
#include <vector>

int e3_19() {

	//give vector on initialization 10 elements, all with value of 42
	std::vector<int> one(10, 42);

	for (auto &c1 : one)
		std::cout << c1 << " ";
	std::cout << std::endl;

	//define vector, use list initialization to give it ten elements all with value of 42
	std::vector<int> two{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

	for (auto &c2 : two)
		std::cout << c2 << " ";
	std::cout << std::endl;

	//define vector, use for loop to loop 10 times, adding elements with push_back, with value of 42
	std::vector<int> three;
	for (int cnt{ 0 }; cnt != 10; cnt++)
		three.push_back(42);

	for (auto &c3 : three)
		std::cout << c3 << " ";
	std::cout << std::endl;

	return 0;
}