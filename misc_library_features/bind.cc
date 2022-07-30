#include <iostream>
#include <vector>
#include <functional>

using namespace std;
using namespace std::placeholders;

void incr(int& number, int& value) {                // Function with reference argument
	number = value;
	++value;
}

int main() {
	int n{2};
	auto incr_n = bind(incr, _1, n);               // Bind n as second argument of incr

	vector<int> numbers(5);
	
	for (auto& number: numbers)
		incr_n(number);                            // Call incr with bound argument
	
	cout << "After call, elements are:" << endl;
	for (auto number: numbers)
		cout << number << ", ";
	
	cout << endl << endl << "n = " << n << endl;   // Has value of n changed?
}