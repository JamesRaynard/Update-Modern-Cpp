#include <iostream>
#include <variant>

int main() {
	std::variant<char, int, double> var;
	var = 3.1;                           // The double alternative is now in use
	
	try {
		// Get by type (if unique)
		// Returns the alternative with type double
		std::cout << "get by type<double>: " << std::get<double>(var) << '\n';

		// Get by index
		// Returns the first alternative
		std::cout << "get by index<2>: " << std::get<2>(var) << '\n';

		// The int alternative is not in use
		// Will throw std::bad_variant_access on error
		std::cout << "get by type<int>: " << std::get<int>(var) << '\n';
	}
	catch (std::bad_variant_access& e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}
}