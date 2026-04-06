#include <iostream>
#include <tuple>
#include <string>

using namespace std::literals;

int main()
{
	std::tuple numbers = make_tuple(1, 2.0, "three"s);         // std::tuple<int, double, std::string>

	/*
	// C++11/14
	double d;
	int i;
	std::string str;

	std::tie(i, d, str) = numbers;                             // Store all elements in variables
	*/

	// C++17
	auto [i, d, str] = numbers;                                // Store all elements in variables

	std::cout << "i = " << i << ", d = " << d << ", s = " << str << '\n';
}