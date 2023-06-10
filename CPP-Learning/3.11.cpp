#include <iostream>
#include <string>

int main() {
	const std::string s = "Keep out!";
	//for loop is legal, c is const char&
	for (auto &c : s)
	{
		std::cout << c;
	}
}