#include <iostream>

int e1_10()
{
    int val1{ 0 };
    int val2{ 0 };
    // Asks you to give values for variables
    std::cout << "Give values to variables val1 and val2." << std::endl << std::endl;

    std::cout << "val1: ";
    // enter value for val1
    std::cin >> val1;

    std::cout << "val2: ";
    // enter value for val2
    std::cin >> val2;

    // while loop that gives you all numbers in range of val1 and val2
    while (val1 <= val2) {
        std::cout << val1 << std::endl;
        val1++;
    }

    return 0;
}