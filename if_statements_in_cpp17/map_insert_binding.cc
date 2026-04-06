#include <iostream>
#include <map>
#include <string>

using namespace std::literals;

int main()
{
	std::map<int, std::string> m = { {1, "hello"s} };
	
	// C++17
	if (auto [iter, success] = m.insert( {1, "goodbye"s} ); success) {
		std::cout << "Inserted the new element\n";
	}
	else {
		std::cout << "Insert failed\n";
		auto [key, value] = *iter;
		std::cout << "Existing element with Key = " << key << ", value = " << value << '\n';
	}
	
	// C++17
	std::cout << "Map elements:\n";
	for (auto [key, value] : m)
		std::cout << "Key = " << key << ", Value = " << value << '\n';
}