#include <iostream>
#include <tuple>
#include <mutex>
#include <vector>
#include <array>
#include <string>

using namespace std::literals;

std::mutex mtx;

int main()
{
    // Equivalent to std::pair<int, double> pr(1, 3.142);
	std::pair pr(1, 3.142);
	
	// Display pr's elements
	std::cout << "Pair elements: " << pr.first << ", " << pr.second << "\n";
	
    // Equivalent to std::tuple<int, double, std::string> tup{1, 2.0, "three"s};
	std::tuple tup{1, 2.0, "three"s};
	
	// Display tup's elements
	std::cout << "Tuple elements: " << std::get<0>(tup) << ", " 
	                                << std::get<1>(tup) << ", "
									<< std::get<2>(tup) << "\n";
	
    // Equivalent to std::vector<int> vec{1, 2, 3};
	std::vector vec{1, 2, 3};
	
	// Display dec's elements
	std::cout << "Vector elements: ";
	for (auto v : vec)
		std::cout << v << ", ";
	std::cout << "\n";
	
	 // Equivalent to array<std::string, 3> arr{"Bart"s, "Lisa"s, "Maggie"s};
	std::array arr{"Bart"s, "Lisa"s, "Maggie"s};
	
	// Display arr's elements
	std::cout << "Array size: " << arr.size() << "\n";
	std::cout << "Array elements: ";
	for (auto a : arr)
		std::cout << a << ", ";
	std::cout << "\n";
	
    // Equivalent to std::lock_guard<std::mutex> lk(mtx);
	std::mutex mtx;
}   std::lock_guard lk(mtx);