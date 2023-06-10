#include <iostream>

int e2_29() {
		int i, *const cp{ &i };
		int *p1, *const p2{ p1 };
		const int ic{ 26 }, &r{ ic };
		const int *const p3{ &ic };
		const int *p;

		{
			//(a)
			//OK, int can be changed to have the value of a const variable
			i = ic;
		}
		{
			//(b)
			//Error, const int* cannot be assigned to type int
			//p1 = p3;
		}
		{
			//(c)
			//Error, const int* cannot be assigned to type int
			//p1 = &ic;
		}
		{
			//(d)
			//Error, const variable cannot be modified
			//p3 = &ic;
		}
		{
			//(e)
			//Error, const variable cannot be modified
			//p2 = p1;
		}
		{
			//(f)
			//Error, const variable cannot be modified
			//ic = *p3;
		}
		return 0;
}