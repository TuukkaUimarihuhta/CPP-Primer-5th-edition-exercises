#include <iostream>
#include "Sales_item.h"

int sales()
{
	
	//readISBN, number of copies sold, and sales price
	Sales_item book;
	//writeISBN, number of copies sold, total revenue, and average price
	std::cin >> book;

	std::cout << book << std::endl << std::endl;
	
	Sales_item item1, item2;
	//read a pair of transactions
	std::cin >> item1 >> item2;
	//first check that item1 and item2 represent the same book
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
		// indicates success
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		// indicates failure
		return -1;
	}
	

	//variable to hold data for the next transaction
	Sales_item curItem;
	//read the first transaction and ensure that there are data to process
	if (std::cin >> curItem)
	{
		//variable to hold the running sum
		Sales_item item;
		//read and process the remaining transactions
		while (std::cin >> item)
		{
			//if we’re still processing the same book
			if (curItem.isbn() == item.isbn())
				//update the running total
				curItem += item;
			else
			{
				//print results for the previous book
				std::cout << curItem << std::endl;
				//total now refers to the next book
				curItem = item;
			}
		}
		//print the last transaction
		std::cout << curItem << std::endl;
	}
	else
	{
		// no input, warn user
		std::cerr << "No Data!" << std::endl;
		return -1;
	}

	return 0;
}