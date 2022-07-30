#include <iostream>
#include <vector>

using namespace std;

class Test {};

int main() {
	// Narrowing conversions are not allowed
	int y = 7.7;                                      // Legal, although compilers may warn
	//int y{7.7};                                     // Illegal
	cout << "y = " << y << endl;
	
	// Avoids inconsistency
	vector<int> old_one(4);         // std::vector variable with elements 0, 0, 0, 0
	vector<int> old_two(4, 2);      // std::vector variable with elements 2, 2, 2, 2
	vector<int> uni_one{4};         // std::vector variable with elements 4
	vector<int> uni_two{4, 2};      // std::vector variable with elements 4, 2
	
	cout << "old_one = ";
	for (vector<int>::iterator it = old_one.begin(); it != old_one.end(); ++it)
		cout << *it << ", ";
	
	cout << endl << "old_two = ";
	for (vector<int>::iterator it = old_two.begin(); it != old_two.end(); ++it)
		cout << *it << ", ";
	
	cout << endl << "uni_one = ";
	for (vector<int>::iterator it = uni_one.begin(); it != uni_one.end(); ++it)
		cout << *it << ", ";
	
	cout << endl << "uni_two = ";
	for (vector<int>::iterator it = uni_two.begin(); it != uni_two.end(); ++it)
		cout << *it << ", ";
	
	// Avoids ambiguity
	Test test();                    // Object creation or function declaration? "Most vexing parse"
}