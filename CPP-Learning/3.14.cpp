#include <iostream>
#include <string>
#include <vector>

int e3_14() {

	std::vector<int> numbers;
	int x;
	//enter numbers to x, x gets pushed as an element to vector
	while (std::cin >> x)
	{
		numbers.push_back(x);
	}
	//read every element in numbers, print them with a space inbetween them
	for (auto &c : numbers)
	{
		std::cout << c << " ";
	}

	return 0;
}