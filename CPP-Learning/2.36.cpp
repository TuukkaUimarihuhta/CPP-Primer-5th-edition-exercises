#include <iostream>

int e2_36() {
	//a and b are int
	int a{ 3 }, b{ 4 };
	// c is int with the value of 3
	decltype(a) c{ a };
	//d is a reference to a
	decltype((b)) d{ a };

	//c becomes 4
	c++;
	std::cout << c << std::endl;

	//a becomes 4
	d++;
	std::cout << a << std::endl;

	return 0;
}