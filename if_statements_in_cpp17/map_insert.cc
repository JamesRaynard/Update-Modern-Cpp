#include <iostream>
#include <map>
#include <string>

using namespace std::literals;

int main()
{
	std::map<int, std::string> m = { {1, "Hello"s} };
	
	// C++11/14
	auto pr = m.insert( {2, "How are you?"s} );
	if (pr.second)
		std::cout << "Inserted the new element\n";
	
	// C++17
	if (auto pr = m.insert( {3, "Goodbye"s}); pr.second)
		std::cout << "Inserted the new element\n";
}