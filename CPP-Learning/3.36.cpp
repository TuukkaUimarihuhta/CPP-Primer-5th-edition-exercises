#include <iostream>
#include <vector>

int e3_36() {

    int arr1[5];
    int arr2[5];

    std::cout << "Give values to arr1" << std::endl;
    //Give value to the element with i as position
    for (int i = 0; i != 5; ++i)
    {
        std::cin >> arr1[i];
    }
    std::cout << "Give values to arr2" << std::endl;
    //Give value to the element with i as position
    for (int i = 0; i != 5; ++i)
    {
        std::cin >> arr2[i];
    }
    for (int i = 0; i != 5; ++i)
        //Check if the values of elements in arr1 and arr2 are equal
        if (arr1[i] == arr2[i]) 
        {
            std::cout << "Arrays arr1 and arr2 are equal" << std::endl;
            break;
        }
        else
        {
            std::cout << "arr1 and arr2 are not equal" << std::endl;
            break;
        }
            

    //Vectors ivec 1 and ivec2, neither have elements yet
    std::vector<int> ivec1;
    std::vector<int> ivec2;
    int elem;

    std::cout << "Create elements with values to ivec1" << std::endl;
    //create 5 elements as you push values to vector
    for (int i = 0; i != 5; ++i)
    {
        std::cin >> elem;
        ivec1.push_back(elem);
    }
    std::cout << "Create elements with values to ivec2" << std::endl;
    //create 5 elements as you push values to vector
    for (int i = 0; i != 5; ++i)
    {
        std::cin >> elem;
        ivec2.push_back(elem);
    }

    //Check if ivec1 and ivec2 are equal
    if (ivec1 == ivec2)
    {
        std::cout << "ivec1 and ivec2 are equal." << std::endl;
    }
    else
    {
        std::cout << "ivec1 and ivec2 are not equal" << std::endl;
    }

	return 0;
}