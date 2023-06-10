#include <iostream>
#include <string>

void lines() {

	std::string word;
	//getline function only treats newlines as delimiter, allowing tabs and spaces
	while (getline(std::cin, word))
	{
		std::cout << word << std::endl;
	}
}

void words() {

	std::string word;

	while (std::cin >> word)
	{
		/*whitespace in string << operator is treated as delimiter.
		  Because of this, string read from the operator has no whitespace characters*/
		std::cout << word << std::endl;
	}
}

int e3_2() {
	lines();
	words();

	return 0;
}