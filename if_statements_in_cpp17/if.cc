#include <iostream>
#include <vector>

int main()
{
	std::vector vec = {1, 2, 3};
	
	// Older C++
	auto iter = begin(vec);
	if (iter != end(vec)) {
	   // Safe to use the iterator here
	   std::cout << "First element of vec is: " << *iter << '\n';
	}
	
	// C++17
	if (auto iter = begin(vec); iter != end(vec)) {
		// Safe to use the iterator here
		std::cout << "First element of vec is: " << *iter << '\n';
	}
}