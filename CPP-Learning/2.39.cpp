#include <iostream>

struct foo { /* empty */ }; // Note: no semicolon

//if no semicolon after struct, it fails to compile with multiple errors
//including Error C3874	return type of 'main' should be 'int' instead of 'foo'

int e2_39() {

	return 0;
}