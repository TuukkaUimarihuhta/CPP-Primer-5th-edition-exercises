#include <iostream>

int e2_34() {
	int i{ 0 }, &r{ i };
	const int ci{ i }, &cr{ ci };

	//r is a reference to int, therefore a is int
	auto a{ r };
	//top-level const in ci is dropped, therefore b is int
	auto b{ ci };
	//cr is a reference to ci, which const is top-level, therefore c is int
	auto c{ cr };
	//because the initializing object is pointed with &, d is int*
	auto d{ &i };
	//& of a const object is low-level const, therefore e is const int*
	auto e{ &ci };
	//deduced type has to be given top-level const explicitly, f is const int
	const auto f{ ci };
	// because g is a reference to const int, g becomes const int&
	auto &g{ ci };

	std::cout << "a: " << a << std::endl;
	//a is int, this is ok
	a = 42; 
	std::cout << "now: " << a << std::endl;

	std::cout << "b: " << b << std::endl;
	//b is int, this is ok
	b = 42;
	std::cout << "now: " << b << std::endl;
	//c is int, this is ok
	std::cout << "c: " << c << std::endl;
	c = 42;
	std::cout << "now: " << c << std::endl;
	//d is a pointer, this produces error
	std::cout << "d: " << d;
	//d = 42;
	//e has low-level const, this produces error
	std::cout << "e: " << e;
	//e = 42;
	//f is const int, it cannot be changed, this produces an error
	std::cout << "f: = " << f;
	//f = 42;
	//g is a reference to const and as such, cannot be changed
	std::cout << "g: " << g;
	//g = 42;

	return 0;
}