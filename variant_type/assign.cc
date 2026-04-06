#include <variant>
#include <string>

using namespace std::literals;

int main() {
	std::variant<char, int, double> var;      // Initialized as char with value 0
	var = 3.1;                                // The double alternative is now in use

	// var = "abc"s;                           // Error! No match for std::string
}