#include <iostream>
#include <string>

int e3_11() {
	const std::string s = "Keep out!";
	//for loop is legal, c is const char&
	for (auto &c : s)
	{
		std::cout << c;
	}
}