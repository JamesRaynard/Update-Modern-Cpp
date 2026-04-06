#include <iostream>
#include <string>
#include <string_view>
#include <charconv>

// Convert a string to a number if possible
// The "first" member of the pair contains the number
// The "second" member of the pair indicates success or failure
//auto str2int(std::string_view str)
std::pair<int, bool> str2int(std::string_view str)
{
	int x;
	
	auto res = std::from_chars(str.data(), str.data() + str.size(), x);
	
	if (res.ec == std::errc{})         // Conversion succeeded
		return std::pair(x, true);
		
	return std::pair(x, false);
}

int main()
{
	std::string str;

	// Read input and call str2int()
	while(true) {
		std::cout << "Please enter a number: ";
		std::cin >> str;
		
		if (auto [num, success] = str2int(str); success)
			std::cout << "Extracted the number " << num << " from " << str << '\n';
		else
			std::cout << "Could not extract a valid number from " << str << '\n';
	}
}