#include <iostream>
#include <string>

int e3_9() {
	std::string s;
	//result will be undefined, subscript is out of range
	std::cout << s[0] << std::endl;

	return 0;
}