#include <iostream>
#include <string>

int e3_7() {
	//string that will have the characters changed to 'x'
	std::string hello{ "Hello World!!!" };
	//if loop control variable is type char, then this won't do anything to "hello" string
	for (char c : hello)
	{
		//replace characters with the letter 'x'
		c = 'x';
	}
	//print hello, now with all characters as 'x'
	std::cout << hello << std::endl;

	return 0;
}