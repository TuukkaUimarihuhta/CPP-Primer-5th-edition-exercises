#include <iostream>
#include <vector>
#include <string>

int e3_13() {

	{
		//a
		//no elements
		std::vector<int> v1;
	}
	{
		//b
		//ten elements, each initialized with 0
		std::vector<int> v2(10);
	}
	{
		//c
		//ten elements, each initialized with 42
		std::vector <int> v3(10, 42);
	}
	{
		//d
		//one element, initialized with 10
		std::vector<int> v4{ 10 };
	}
	{
		//e
		//two elements, initialized with 10 and 42
		std::vector<int> v5{ 10, 42 };
	}
	{
		//f
		//ten default-initialized elements
		std::vector<std::string> v6{ 10 };
	}
	{
		//g
		//ten elements initialized with hi
		std::vector<std::string> v7{ 10, "hi" };
	}
	return 0;
}