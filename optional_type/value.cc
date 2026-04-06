#include <iostream>
#include <string>
#include <string_view>
#include <charconv>
#include <optional>

// Convert a string to a number if possible
std::optional<int> str2int(std::string_view str)
{
	int x;
	
	auto res = std::from_chars(str.data(), str.data() + str.size(), x);
	
	if (res.ec == std::errc{})         // Conversion succeeded
		return x;
		
	return {};                         // Empty optional
}

int main()
{
	std::string str;

	// Read input and call str2int()
	while(true) {
		std::cout << "Please enter a number: ";
		std::cin >> str;
		
		if (auto opt = str2int(str); opt.has_value())
			std::cout << "Extracted the number " << opt.value() << " from " << str << '\n';
		else
			std::cout << "Could not extract a valid number from " << str << '\n';
	}
	
	std::optional<int> opt;
	
	try {
		std::cout << opt.value() << '\n';
	}
	catch (const std::bad_optional_access& e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}

}