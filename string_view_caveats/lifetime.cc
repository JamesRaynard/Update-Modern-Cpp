#include <iostream>
#include <string_view>
#include <string>

std::string func()
{
	// Beware of short-string optimization!
	return std::string{"A string which contains many characters"};
}

int main()
{
	const std::string& s = func();      // OK - const ref "extends lifetime" of the temporary
	//std::string& s = func();          // Error - cannot bind rvalue to lvalue ref
	std::cout << s << '\n';
	/*
	std::string_view sv = func();       // Compiles, but uses temporary's object data
	std::cout << sv << '\n';            // Temporary object's data no longer exists!
	*/
}