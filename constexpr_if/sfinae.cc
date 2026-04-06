#include <iostream>
#include <string>

// Not instantiated if T is std::string
template<typename T, std::enable_if_t<!std::is_same_v<std::string, T>, int> = 99>
std::string get_string(const T& arg)
{
    return std::to_string(arg);
}

// Instantiated only if T is std::string
template<typename T, std::enable_if_t<std::is_same_v<std::string, T>, int> = 99>
std::string get_string(const T& arg)
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