#include <iostream>
#include <string>

// Find first occurrence of two characters in a string
// C++14
void find_cpp14(const std::string& str, char c1, char c2)
{
	// Find first occurrence of c1 in str
	auto idx = str.find(c1);

	// Did we find it?
	if (idx != std::string::npos)
		std::cout << "First occurrence of " << c1 << " is at position " << idx << '\n';

	// Find first occurrence of c2 in str
	// idx is still in scope - may not be safe to overwrite it
	auto idx2 = str.find(c2);

	if (idx2 != std::string::npos)
		std::cout << "First occurrence of " << c2 << " is at position " << idx2 << '\n';
}

// C++17
void find_cpp17(const std::string& str, char c1, char c2)
{
	// Find first occurrence of c1 in str
	if (auto idx = str.find(c1); idx != std::string::npos)
		std::cout << "First occurrence of " << c1 << " is at position " << idx << '\n';

	// Find first occurrence of c2 in str
	if (auto idx = str.find(c2); idx != std::string::npos)
		std::cout << "First occurrence of " << c2 << " is at position " << idx << '\n';
}

int main()
{
	std::string str{"Hello"};
	char c1{'l'};
	char c2{'o'};

	std::cout << "Calling find_cpp14 with string " << str << '\n';
	find_cpp14(str, c1, c2);

	std::cout << "\nCalling find_cpp17 with string " << str << '\n';
	find_cpp17(str, c1, c2);
}