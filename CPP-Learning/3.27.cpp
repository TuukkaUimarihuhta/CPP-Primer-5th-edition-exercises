#include <iostream>
#include <string>

int txt_size() {

	return 0;
}

int e3_27() {

	unsigned buf_size{ 1024 };

	//error; buf_size has to be constant expression
	//int ia[buf_size];

	//fine
	int ia[4 * 7 - 14];

	//error; txt_size() function has to be constexpression
	//int ia[txt_size()];

	//error, there is a trailing '\0' in "fundamental(11 characters)" char st has to be [12]
	//char st[11] = "fundamental";
	return 0;
}