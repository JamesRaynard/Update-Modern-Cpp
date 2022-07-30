#include <iostream>
#include <array>

using namespace std;

int main() {
	// std::array can be initialized the same way as a vector
	std::array<int, 5> arr {1, 2, 3, 4, 5};

	cout << "Iterator loop: ";
	for (auto it = arr.begin(); it != arr.end(); ++it)       // Traditional iterator loop
		cout << *it << ", ";
	cout << endl;
	
	cout << "Range-for loop: ";
	for (auto el: arr)                                       // Range-for loop
		cout << el << ", ";
	cout << endl;
	
	cout << "Indexed loop: ";
	for (size_t i = 0; i < arr.size(); ++i)                  // Indexed loop
		cout << arr[i] << ", ";
	cout << endl;
	
	// Arrays of the same type and size can be assigned
	std::array<int, 5> five_els;
	five_els = arr;
	
	cout << "Elements of five_els: ";
	for (auto el: five_els)                                       // Range-for loop
		cout << el << ", ";
	cout << endl;
}