#include <iostream>

int e2_28() {

	{
		//(a)
		//Gives an error, const pointer has to be initialized
		//int i, *const cp;
	}
	{
		//(b)
		//Error, const pointer needs to be initialized
		//int *p1, *const p2;
	}
	{
		//(c)
		//Error, ic needs to be initialized due to being const
		const int ic, &r{ ic };
	}
	{
		//(d)
		//Error, const pointer requires initializer
		//const int *const p3;
	}
	{
		//(e)
		//OK, p may point to a int that is const
		const int *p;
	}
	return 0;
}