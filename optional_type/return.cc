#include <iostream>
#include <string>
#include <string_view>
#include <charconv>
#include <optional>

// Convert a std::string to a number if possible
std::optional<int> str2int(std::string_view str)
{
	int x;
	
	auto res = std::from_chars(str.data(), str.data() + str.size(), x);
	
	if (res.ec == std::errc())         // Conversion succeeded
		return x;                      // Return the number
		
	return std::nullopt;               // Otherwise, return an empty object
}

int main()
{
	std::string str;

	// Read input and call str2int()
	while(true) {
		std::cout << "Please enter a number: ";
		std::cin >> str;
		
		if (auto opt = str2int(str); opt)
			std::cout << "Extracted the number " << *opt << " from " << str << '\n';
		else
			std::cout << "Could not extract a valid number from " << str << '\n';
	}
}