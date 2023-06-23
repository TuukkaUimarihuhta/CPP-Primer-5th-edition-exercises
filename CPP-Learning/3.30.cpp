#include <iostream>

int e3_30() {

	constexpr size_t array_size{ 10 };

	//index will be from 0-9, instead of 1-10
	int ia[array_size];

	//crashes, goes from 1 to 10, going over the index 0-9, causing buffer overload
	//for (size_t ix{ 1 }; ix <= array_size; ++ix)
	//	ia[ix] = ix;

	//using < causes ix to stop at 9, not causing buffer overload
	for (size_t ix{ 0 }; ix < array_size; ++ix)
		ia[ix] = ix;
	return 0;
}