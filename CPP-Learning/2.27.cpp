#include <iostream>

int e2_27() {
	{
		//(a)
		//Illegal, nonconst reference cannot be initialized to literal
		//int i{ -1 }, &r{ 0 };
	}
	{
		//(b)
		int i2;
		//OK
		int *const p2{ &i2 };
	}
	{
		//(c)
		//OK
		const int i{ -1 }, &r{ 0 };
	}
	{
		//(d)
		int i2;
		//OK
		const int *const p3{ &i2 };
	}
	{
		//(e)
		int i2;
		//OK
		const int *p1{ &i2 };
	}
	{
		//(f)
		//Illegal, reference requires an initializer
		const int &const r2{};
	}
	{
		//(g)
		//OK, values come out as undefined
		int i{};
		const int i2{ i }, &r{ i };
	}
	return 0;
}