#include <iostream>
#include <string>

int while_loop() {
	//string that will have the characters changed to 'x'
	std::string hello{ "Hello World!!!" };
	//decltype is equal to std::string::size_type
	decltype(hello.size()) c{ 0 };
	//while loop where while c is not the same amount as hello.size()
	while(c !=hello.size())
	{
		//replace characters with the letter 'x' from every position (subscript)
		hello[c++] = 'x';
	}
	//print hello, now with all characters as 'x'
	std::cout << hello << std::endl;

	return 0;
}

int for_loop() {
	//string that will have the characters changed to 'x'
	std::string hello{ "Hello World!!!" };
	
	/*for loop where std::string::size_type is equal to decltype(hello.size())
	* c is compared to the char amount of hello inside loop argument, if c is not same size, +1*/
	for (std::string::size_type c = 0; c != hello.size(); c++)
	{
		//replace characters with the letter 'x' from every position (subscript)
		hello[c] = 'x';
	}
	//print hello, now with all characters as 'x'
	std::cout << hello << std::endl;

	return 0;

}

int e3_8() {
	while_loop();
	for_loop();

	return 0;
}