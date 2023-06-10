#include <iostream>

int e2_35() {
	//this is const int
	const int i{ 42 };
	//top-level const is ignored, j is int
	auto j{ i };
	//const is explicitly added, k is const int&
	const auto &k{ i };
	//p is a pointer to const int
	auto *p{ &i };
	//j2 becomes const int, &k2 becomes const int&
	const auto j2{ i }, &k2{ i };
	
	//i = 44; i is const int
	std::cout << i << std::endl;

	//j is int, therefore j = 44
	j = 44;
	std::cout << j << std::endl;

	//k = 44; k cannot be used to change values
	std::cout << k << std::endl;

	//p = 44; type int cannot be assigned to type const int 
	std::cout << *p << std::endl;

	//j2 = 43; j2 is const int
	std::cout << j2 << std::endl;
	
	//k2 = 44; k2 cannot be used to change values
	std::cout << k2 << std::endl;

	return 0;
}
