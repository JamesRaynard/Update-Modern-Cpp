#include <iostream>

int main() 
{
	std::pair pr(1, 3.142);                   // std::pair<int, double>

	auto [i, d] = pr;                         // Variable i, type int, value 1
                                              // Variable d, type double, value 3.142
	std::cout << "i = " << i << ", d = " << d << '\n';
}