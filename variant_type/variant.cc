#include <variant>
#include <string>

using namespace std::literals;

int main() {
	// Default constructor
	// Value-initializes the first alternative
	std::variant<std::string, int> vsi;                   // Initialized as empty string
	std::variant<int, std::string> vis;                   // Initialized as int with value 0

	// Converting constructor
	// The deduced type of the argument is used to choose the alternative
	std::variant<std::string, int> vsicc{"hello"s};       // Initialized as string with data "hello"
	std::variant<std::string, int> vscci{42};             // Initialized as int with value 42
	//std::variant<std::string, std::string> vss{ "hello"s };  // Error! (Ambiguous)
}