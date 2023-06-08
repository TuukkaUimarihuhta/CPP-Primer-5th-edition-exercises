#include <iostream>
#include <string>

void compareStr() {

	std::string one{ "Hello" }, two{ "Hello!" };
	//compare wether strings are the same
	if (one == two)
	{
		std::cout << "The strings are equal" << std::endl;
	}
	//check if string one is greater
	else if (one > two)
	{
		std::cout << "First string is greater!" << std::endl;
	}
	else
	{
		std::cout << "Second string is greater!" << std::endl;
	}
}

void compareLength() {

	std::string one{ "Apple" }, two{ "Orange" };
	//compare the lengths of string one and string two
	if (one.size() == two.size())
	{
		std::cout << "Strings have equal length" << std::endl;
	}
	//check if string one has longer length
	else if (one.size() > two.size())
	{
		std::cout << "String one is longer" << std::endl;
	}
	else
	{
		std::cout << "String two is longer" << std::endl;
	}
}

int e3_4() {
	compareStr();
	compareLength();

	return 0;
}