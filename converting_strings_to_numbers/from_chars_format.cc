#include <iostream>
#include <charconv>
#include <string>

int main()
{
	// String which contains the data we want to convert
	std::string str{"3.14159"};
	std::cout << "str: " << str << '\n';

	// Convert all data in str's memory buffer to a double
	double number{0.0};
	
	// Use the "general" format for the conversion
	auto format = std::chars_format::general;
	auto res = std::from_chars(str.data(), str.data() + str.size(), number, format);

	std::cout << "number: " << number << '\n';
}