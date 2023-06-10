#include <iostream>

int e2_37() {
	
	//a and b are int
	int a{ 3 }, b{ 4 };
	//c is an int
	decltype(a) c{ a };
	//d becomes a reference (int &) to a
	decltype(a = b) d{ a };

	//3
	std::cout << a << std::endl;
	//4
	std::cout << b << std::endl;
	//3
	std::cout << c << std::endl;
	//3
	std::cout << d << std::endl;
	d++;
	//a is now 4
	std::cout << a << std::endl;

	return 0;
}