#include <iostream>
#include <vector>
#include <string>

int e3_22() {
    //vector text, that holds string elements
    std::vector<std::string> text;
    //string line
    std::string line;
    //doesn't cut string off in whitespace, only in line
    while (getline(std::cin, line))
        //add line as an element to text
        text.push_back(line);

    //for loop to iterate through text vector
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        //for loop to iterate through element, until empty element is found
        for (auto i = it->begin(); i != it->end(); i++)
        {
            //turns all characters in elements to uppercase
            *i = toupper(*i);
        }
        //anything past empty element is not converted nor printed
        std::cout << *it << std::endl;
    }

    return 0;
}