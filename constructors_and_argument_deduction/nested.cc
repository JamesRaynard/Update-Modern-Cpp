#include <iostream>
#include <vector>

void print(const std::vector<int>& vec)
{
	std::cout << "1 dimensional vector: ";
	for (auto v : vec)
		std::cout << v << ", ";
	std::cout << '\n';
}

void print(const std::vector<std::vector<int>>& vec)
{
	std::cout << "2 dimensional vector:\n";
	int n = 0;
	for (auto vi : vec) {
		std::cout << "Row " << ++n << ": ";
		for (auto v : vi) {
			std::cout << v << ", ";
		}
		std::cout << '\n';
	}
}

int main()
{
	std::vector v1{1, 2, 3};                 // v1 is std::vector<int>
	print(v1);

	std::vector v2{4, 5, 6, 7};              // v2 is std::vector<int>
	print(v2);

	// Nested vector
	std::vector v3{v1, v2};                  // v3 is std::vector<std::vector<int>>
	print(v3);

	// Vector with single argument has same type
	std::vector v4{v1};                      // v4 is vector<int>, not vector<vector<int>>
	print(v4);
}