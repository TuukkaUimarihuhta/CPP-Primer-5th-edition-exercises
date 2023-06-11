#include <iostream>
#include <string>
#include <vector>

int e3_18() {

	//appears legal, but is not: as ivec has no elements in it, subscript[0] is out of range
	std::vector<int> ivec;
	//BAD!!!
	ivec[0] = 42;
	
	return 0;
}