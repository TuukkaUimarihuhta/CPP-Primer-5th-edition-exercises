#include <iostream>
#include <string>

int e3_10() {

	std::string word;
	//std::getline, so that whitespace doesn't cut words
	std::getline(std::cin, word);
	//auto gets char, c is a reference
	for (auto &c : word)
	{
		//if c is not a punctuation, print it
		if (!ispunct(c))
		{
			//will ignore punctuation marks, everything else gets printed
			std::cout << c;
		}
	}
	return 0;
}