#include <iostream>
#include <string_view>
#include <string>

int main()
{
	// Constructor taking C string literal
	std::string_view sv1{"Hello"};
	std::cout << "sv1: " << sv1 << "\n";

	// Constructor taking std::string
	std::string str{"World"};
	std::string_view sv2{str};
	std::cout << "sv2: " << sv2 << "\n";

	// Constructor taking pointer and length
	const char arr[] = "Hello, World!";
	std::string_view sv3(arr, 14);
	std::cout << "sv3: " << sv3 << "\n";

	// Convert string_view to std::string
	std::string str2{sv2};
	std::cout << "str2: " << str2 << "\n";
}