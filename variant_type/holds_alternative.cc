#include <iostream>
#include <variant>

int main() {
	std::variant<char, int, double> var;

	// Bring the double alternative into use
	var = 3.1;

	// Returns a bool
	// True if the int alternative is in use
	if (std::holds_alternative<int>(var))
		std::cout << std::get<int>(var) << '\n';
	else
		std::cout << "Int alternative is not in use\n";

	// Only works with type parameters
	// if (std::holds_alternative<1>(var))             // Error!

	auto idx = var.index();
	std::cout << "Alternative in use has index: " << idx << '\n';
	
	// Cannot use index() as the parameter to get()
	//std::cout << std::get<idx>(var) << '\n';         // Error!
}