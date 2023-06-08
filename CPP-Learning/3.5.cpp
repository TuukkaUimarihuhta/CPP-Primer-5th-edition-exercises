#include <iostream>
#include <string>

void concatenated() {

	std::string totalWord, word;
	while (std::cin >> word)
	{
		//all strings are together, with no whitespace between
		totalWord += word;
	}
	std::cout << totalWord << std::endl;
}

void notConcatenated() {

	std::string totalWord, word;
	while (std::cin >> word)
	{
		//having " " adds a whitespace between strings
		totalWord += " " + word;
	}
	std::cout << totalWord << std::endl;
}

int e3_5() {
	concatenated();
	notConcatenated();

	return 0;
}