#include <iostream>
#include <vector>
#include <string>

//void function to get vector<int> size and to print element valaues
void intVectorSize2(std::vector<int> v)
{
	//v.size() gives the amount of elements vector has
	std::cout << "Amount of elements: " << v.size() << std::endl;
	std::cout << "Element values: ";
	//using iteration to get the elements from vector
	for (auto c = v.cbegin(); c != v.cend(); c++)
		//give the values elements have and add a space between them
		std::cout << *c << " ";
	std::cout << std::endl;
}

//void function to get vector<string> size and to print element valaues
void stringVectorSize2(std::vector<std::string> v)
{
	//v.size() gives the amount of elements vector has
	std::cout << "Amount of elements: " << v.size() << std::endl;
	std::cout << "Element values: ";
	//using iteration to get the elements from vector
	for (auto c = v.cbegin(); c != v.cend(); c++)
		//give the values elements have and add a space between them
		std::cout << *c << " ";
	std::cout << std::endl;
}

int e3_21() {
	//a
	//no elements
	std::vector<int> v1;
	//b
	//ten elements, each initialized with 0
	std::vector<int> v2(10);
	//c
	//ten elements, each initialized with 42
	std::vector <int> v3(10, 42);
	//d
	//one element, initialized with 10
	std::vector<int> v4{ 10 };
	//e
	//two elements, initialized with 10 and 42
	std::vector<int> v5{ 10, 42 };
	//f
	//ten default-initialized elements
	std::vector<std::string> v6{ 10 };
	//g
	//ten elements initialized with hi
	std::vector<std::string> v7{ 10, "hi" };

	//calling functions and replacing the v with the respective vector
	intVectorSize2(v1);
	intVectorSize2(v2);
	intVectorSize2(v3);
	intVectorSize2(v4);
	intVectorSize2(v5);
	stringVectorSize2(v6);
	stringVectorSize2(v7);

	return 0;
}