#include <iostream>

int e1_10()
{
    int num{ 10 };

    while (num > 0)
    {
        std::cout << num << std::endl;
        num--;
    }
    std::cout << num << std::endl;

    return 0;
}