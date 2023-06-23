#include <iostream>
#include <string>

int e3_6() {
	//string that will have the characters changed to 'x'
	std::string hello{ "Hello World!!!" };
	//for every character in hello(c is a reference to hello)
	for (auto &c : hello)
	{
		//replace characters with the letter 'x'
		c = 'x';
	}
	//print hello, now with all characters as 'x'
	std::cout << hello << std::endl;

	return 0;
}