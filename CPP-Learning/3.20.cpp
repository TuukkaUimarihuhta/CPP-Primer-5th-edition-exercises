#include <iostream>
#include <vector>
#include <string>

//function to count the sum of two adjacent elements
void adjaSum(std::vector<int> &vec) {
    //if the amount of elements is less than two, return
    if (vec.size() < 2)
        return;
    //when the size of i is less than vec -1, add i + 1
    //loops through all elements except the final one
    for (std::string::size_type i = 0; i < vec.size() - 1; ++i)
        //add through subscript adjacent elements together
        std::cout << vec[i] + vec[i + 1] << " ";
    std::cout << std::endl;
}

//function to sum first and last element
void firstLastSum2(std::vector<int> &vec) {

    //if i is not the same size as vec size divided by two, i + 1 
    //loops around half of the vector size ie. six elements, three loops
    for (decltype(vec.size()) i = 0; i != vec.size() / 2; i++)
        //add first and last element ie. if six elements and [i] = 0,
        //then vec[vec.size() - 1 - i] = vec[6 - 1 - 0] = vec[5]
        std::cout << vec[i] + vec[vec.size() - 1 - i] << " ";
    std::cout << std::endl;
}

int e3_20() {
    //vecto that hold elements type int, no elements at start
    std::vector<int> ivec;
    int i;
    //add elements via push_back
    while (std::cin >> i)
        ivec.push_back(i);

    //call functions with vector as argument
    adjaSum(ivec);
    firstLastSum2(ivec);

    return 0;
}