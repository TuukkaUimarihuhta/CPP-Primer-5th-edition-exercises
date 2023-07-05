#include <iostream>

int e3_35() {

    int ten[10] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10 };

    //Goes through every element in ten, prints them
    for (auto &el : ten)
        std::cout << el << ' ';

    std::cout << std::endl;
    //pbeg point to the first element in ten and pend points just past the last element
    //if pbeg is not equal to pend, move bgeg forward
    for (int *pbeg = std::begin(ten), *pend = std::end(ten); pbeg != pend; ++pbeg)
        //use pointer to change the value of the elements into 0
        *pbeg = 0;

    //print the elements again
    for (auto &el : ten)
        std::cout << el << ' ';
    std::cout << std::endl;

	return 0;
}