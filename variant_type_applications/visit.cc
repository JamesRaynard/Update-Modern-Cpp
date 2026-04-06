#include <iostream>
#include <variant>
#include <vector>

struct TokenVisitor {
	void operator()(const char c) { std::cout << "Character: " << c << '\n'; }
	void operator()(const int i) { std::cout << "Integer: " << i << '\n'; }
	void operator()(const double d) { std::cout << "Floating-point: " << d << '\n'; }
};

int main() {
	using Token = std::variant<char, int, double>;            // Alias for Token variant
	std::vector<Token> tokens = {42, 3.14159, 'Z', 99};       // std::vector of Token variants

	// Iterate over the variants
	for (auto token : tokens) {
		// Call TokenVisitor's () operator
		// Pass token's in-use alternative as argument
		std::visit(TokenVisitor(), token);
	}
}