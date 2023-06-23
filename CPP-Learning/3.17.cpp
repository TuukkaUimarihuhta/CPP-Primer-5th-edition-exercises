#include <iostream>
#include <string>
#include <vector>

int e3_17() {

	// vector with string elements, empty first
	std::vector<std::string> words;

	std::string word;
	//add strings to word
	while (std::cin >> word)
	{
		//push word to words elements
		words.push_back(word);
	}
	//for every element in words
	for (auto &elements : words)
	{
		//for every value in elements
		for (auto &val : elements)
		{
			//change values to uppercase, if they are not uppercase yet
			val = toupper(val);
		}
	}
	//if i is not the same lenght as words, i +1
	for (std::string::size_type i = 0; i != words.size(); ++i) {
		//print the strings in words via subscript, add space
		std::cout << words[i] << " ";
		//if the remainder of i + 1 divided by 8 is 0, add newline
		//every multiplication of eight(8, 16, 24) causes a newline
		if ((i + 1) % 8 == 0)
			std::cout << std::endl;
	}

	return 0;
}