#include <iostream>
#include <variant>

int main() {
	std::variant<char, int, double> var;
	
	// Bring the double alternative into use
	var = 3.1;

	std::cout << "get_if() by type<double>: ";

	// Returns pointer to char alternative if in use
	if (auto pc = std::get_if<double>(&var); pc)
		std::cout << *pc << '\n';

	std::cout << "get_if() by index<2>: ";

	// Returns pointer to first alternative if in use
	if (auto p2 = std::get_if<2>(&var); p2)
		std::cout << *p2 << '\n';

	std::cout << "get_if() by type<int>: ";

	// Returns pointer to int alternative if in use
	// Returns null pointer on error
	if (auto p1 = std::get_if<int>(&var); p1)
		std::cout << *p1 << '\n';
	else
		std::cout << "int alternative is not in use\n";
}