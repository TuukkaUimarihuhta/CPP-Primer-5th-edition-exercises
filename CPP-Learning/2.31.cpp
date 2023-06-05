#include <iostream>

int e2_31() {
	int i;
	//top-level const, low-level consts only appear in pointers and references
	const int v2{ 0 };
	// no const
	int v1{ v2 };
	//No const, both objects are towards int
	int *p1{ &v1 }, &r1{ v1 };
	// p2 has low-level const, p3 has top-level const and r2 has low-level const
	const int *p2{ &v2 }, *const p3{ &i }, &r2{ v2 };
	{
		//legal, top-level const is ignored
		r1 = v2;
	}
	{
		//illegal, low-level const cannot be assigned to int
		//p1 = p2;
	}
	{
		//illegal, top-level const is ignored, but low-level const cannot be copied to int
		//p1 = p3;
	}
	{
		//legal, int* can be converted to const int*
		p2 = p1;
	}
	{
		//legal, top-level const is ignored, both have low-level const qualifications
		p2 = p3;
	}

	//assignment can add but not remove low-level const
	//top-level const will be ignored during assignment
	return 0;
}