#include <iostream>
#include <string>

void greet(const std::string& person)
{
	std::cout << "Hello, " << person << '\n';
}

int main()
{
	greet("World");    // Called as greet(string{ "World" })
}