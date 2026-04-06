#include <iostream>
#include <string_view>
#include <string>

int main()
{
	std::string_view sv{"Hello, World!"};
	std::cout << "string view: " << sv << "\n";
	
	std::cout << "Removing 7 characters from front\n";
	sv.remove_prefix(7);
	std::cout << "string view: " << sv << "\n";
	
	std::cout << "Removing 1 character from back\n";
	sv.remove_suffix(1);
	std::cout << "string view: " << sv << "\n";
	//std::string str{sv.data()};   // Retains removed suffix
	std::string str{sv.data(), sv.size()};
	std::cout << "string: " << str << "\n";
}