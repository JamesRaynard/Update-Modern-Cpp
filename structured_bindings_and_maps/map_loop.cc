#include <iostream>
#include <map>
#include <string>

using namespace std::literals;

int main()
{
	std::map<int, std::string> m ={
		{1, "Hello"s},
		{2, "How are you?"s},
		{3, "Goodbye"s}
	};

	// C++11/14
	std::cout << "Map elements:\n";
	for (auto el : m)
		std::cout << "Key = " << el.first << ", Value = " << el.second << '\n';

	// C++17
	std::cout << "Map elements:\n";
	for (auto [key, value] : m)
		std::cout << "Key = " << key << ", Value = " << value << '\n';
}