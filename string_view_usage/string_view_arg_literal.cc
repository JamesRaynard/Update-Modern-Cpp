#include <iostream>
#include <string_view>
#include <string>

using namespace std::literals;

void greet(std::string_view person)
{
    std::cout << "Hello, " << person << "\n";
}

int main()
{
	greet("World"sv);    // string_view borrows memory, literal calculates length at compile-time
}