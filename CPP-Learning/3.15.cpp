#include <iostream>
#include <string>
#include <vector>

int e3_15() {

	std::vector<std::string> words;
	std::string x;
	//enter strings to x, x gets pushed as an element to vector
	while (std::cin >> x)
	{
		words.push_back(x);
	}
	//read every element in words, print them with a space inbetween them
	for (auto &c : words)
	{
		std::cout << c << " ";
	}
	return 0;
}