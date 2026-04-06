#include <iostream>
#include <string>
#include <string_view>
#include <charconv>

// Convert a string to a number if possible
// Return null on failure
int *str2int(std::string_view str)
{
	int x;
	
	auto res = std::from_chars(str.data(), str.data() + str.size(), x);
	
	if (res.ec == std::errc{})        // Conversion succeeded
		return new int(x);
	
	return nullptr;
}

int main()
{
	std::string str;
	
	// Read input and call str2int()
	while(true) {
		std::cout << "Please enter a number: ";
		std::cin >> str;
		
		if (int *px = str2int(str); px) {
			std::cout << "Extracted the number " << *px << " from " << str << '\n';
			delete px;             // Memory leak if px is not deleted
		}
		else
			std::cout << "Could not extract a valid number from " << str << '\n';
	}
}