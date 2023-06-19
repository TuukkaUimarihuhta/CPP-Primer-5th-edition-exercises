#include <iostream>
#include <vector>
#include <string>

//function to count the sum of two adjacent elements
void adjSum(std::vector<int> &vec) {
    //if the amount of elements is less than two, return
    if (vec.size() < 2)
        return;
    //Use iterator to go through vector
    for (auto i = vec.begin(); i != vec.end() - 1; ++i)
        //add through subscript adjacent elements together using iterator
        std::cout << *i + *(i + 1) << " ";
    std::cout << std::endl;
}

//function to sum first and last element
void firstLastSum(std::vector<int> &vec) {

    //variables for cleanliness sake
    auto beg = vec.begin();
    auto end = vec.end();
    //middle to get nearest element middle from vector
    auto middle = beg + (end - beg) / 2;
    //i = beginning of vector, if i is not middlepoint, move forward one
    for (auto i = vec.begin(); i != middle; i++)
        //with six elements, equal to [0] + [6 - 1 - (0 - 0)]
        std::cout << *i + *(end - 1 - (i - beg)) << " ";
    std::cout << std::endl;
}

int e3_24() {
    //vecto that hold elements type int, no elements at start
    std::vector<int> ivec;
    int i;
    //add elements via push_back
    while (std::cin >> i)
        ivec.push_back(i);

    //call functions with vector as argument
    adjSum(ivec);
    firstLastSum(ivec);

    return 0;
}