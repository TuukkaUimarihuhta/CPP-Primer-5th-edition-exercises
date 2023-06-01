#include <iostream>

int pointer() {
	int x;
	int* px = &x;

	*px = 15;
	std::cout << x << " " << *px << std::endl;  // 10 10
	x = 24;
	std::cout << x << " " << *px << std::endl;  // 5 5

	return 0;
}