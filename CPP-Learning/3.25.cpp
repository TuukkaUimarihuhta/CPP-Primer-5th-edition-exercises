#include <iostream>
#include <vector>

int e3_25() {
    std::vector<unsigned> scores(11, 0);
    unsigned grade;
    while (std::cin >> grade)
        //only accept scores within range
        if (grade <= 100)
        {
            //add count based on the scores
            ++*(scores.begin() + grade / 10);
        }
    //print how many of different grades were given
    for (auto s : scores)
        std::cout << s << " ";
    std::cout << std::endl;

    return 0;
}