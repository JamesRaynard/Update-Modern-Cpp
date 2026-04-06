#include <iostream>
#include <string>

// Template function for the general case
template<typename T>
std::string get_string(const T& arg)
{
    return std::to_string(arg);
}

// Template specialization for std::string
template<>
std::string get_string(const std::string& arg)
{
	return arg;
}

int main()
{
	int x{42};
	std::cout << "x: " << x << '\n';
	std::cout << "get_string(x): " << get_string(x) << '\n';
	std::string str{"hello"};
	std::cout << "str: " << str << '\n';
	std::cout << "get_string(str): " << get_string(str) << '\n';
}