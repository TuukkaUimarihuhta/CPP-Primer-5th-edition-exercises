#include <iostream>

int e2_30() {
	int i;
	//top-level const, low-level consts only appear in pointers and references
	const int v2{ 0 };
	// no const
	int v1{ v2 };
	//No const, both objects are towards int
	int *p1{ &v1 }, &r1{ v1 };
	// p2 has low-level const, p3 has top-level const and r2 has low-level const
	const int *p2{ &v2 }, *const p3{ &i }, &r2{ v2 };
}