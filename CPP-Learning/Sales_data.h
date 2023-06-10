//header guard, check if the word SALES_DATA_H is defined
#ifndef SALES_DATA_H
//if SALES_DATA_H is not defiend, define it
#define SALES_DATA_H
//include string, as Sales_data needs it
#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold{ 0 };
	double revenue{ 0.0 };
};
// if SALES_DATA_H has already been defined, then everything inside ifndef and endif is ignored
#endif // !SALES_DATA_H