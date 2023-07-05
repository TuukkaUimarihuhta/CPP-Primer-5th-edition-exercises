#include <iostream>


int e3_34() {


	int test[] = { 1, 2, 3, 5 };

	int p1 = test[2];
	std::cout << p1 << std::endl;
	int p2 = test[3];
	std::cout << p2 << std::endl;
	//Equivalent to p1 = p2, is effectively 3 + 5 - 3
	p1 += p2 - p1;
	std::cout << p1 << std::endl;
	return 0;
}