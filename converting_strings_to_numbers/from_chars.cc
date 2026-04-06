#include <iostream>
#include <charconv>
#include <string>

int main()
{
	// String which contains the data we want to convert
	std::string str{"100"};
	std::cout << "str: " << str << '\n';

	// Convert all data in str's memory buffer to an int
	int number{0};
	
	auto res = std::from_chars(str.data(), str.data() + str.size(), number);

	std::cout << "number: " << number << '\n';
	
	// Using base 16 for the conversion
	res = std::from_chars(str.data(), str.data() + str.size(), number, 16);
	
	std::cout << "number using base 16: " << number << '\n';
}