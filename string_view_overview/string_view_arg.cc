#include <iostream>
#include <string_view>

void greet(std::string_view person)
{
    std::cout << "Hello, " << person << '\n';
}

int main()
{
	greet("World");    // string_view borrows memory
}