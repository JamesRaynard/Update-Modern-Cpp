#include <iostream>
#include <string>

template<typename T>
std::string get_string(const T& arg)
{
    if (std::is_same_v<std::string, T>)  // Replaced by "true" if T is a string, else "false"
        return arg;                      // Error if T is a built-in type
    else
        return std::to_string(arg);      // Error if T is std::string
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