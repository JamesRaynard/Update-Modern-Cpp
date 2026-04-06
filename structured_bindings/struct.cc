#include <iostream>
#include <string>

using namespace std::literals;

struct Numbers {
	int x;
	double y;
	std::string z;
};

int main()
{
	Numbers numbers{1, 2.0, "three"s};

	/*
	// Before C++17
	int i = numbers.x;
	double d = numbers.y;
	string s = numbers.z;
	*/

	// C++17
	auto [i, d, s] = numbers;

	std::cout << "i = " << i << ", d = " << d << ", s = " << s << '\n';
}