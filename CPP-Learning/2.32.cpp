#include <iostream>


int e2_32() {
	//illegal, mismatch in types
	//int null{ 0 }, *p{ null };
	{
		//use nullptr to initialize p
		int null{ 0 };
		int *p{ nullptr };
	}
	{
		//initialize p with 0
		int null{ 0 };
		int *p{ 0 };
	}
	{
		//initialize with NULL
		int null{ 0 };
		int *p{ NULL };
	}

	return 0;
}