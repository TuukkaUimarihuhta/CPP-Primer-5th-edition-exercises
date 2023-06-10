#include <iostream>
#include <vector>
#include <string>

int e3_12() {

	{
		//a
		//vector whose elements are vectors, ivec is empty
		std::vector<std::vector<int>> ivec;

		//b
		//error, svec holds strings, not ints
		//std::vector<std::string> svec = ivec;

		//c
		//ten strings, each element is "null"
		std::vector<std::string> svec(10, "null");
	}
	return 0;
}