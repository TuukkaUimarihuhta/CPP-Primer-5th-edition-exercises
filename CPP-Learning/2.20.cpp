#include <iostream>

int e2_20() {
	// x is initialized with th value of 42
	int x = 42;
	// px holds the address of x, px is the pointer of x
	int* px = &x;
	// effectively means *px = x * x
	*px = *px * *px;
	// value of x has changed to the new value that px points to
	std::cout << x << std::endl;

	return 0;
}