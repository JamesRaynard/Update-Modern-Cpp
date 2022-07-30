#include <iostream>
#include <string>

using namespace std;

int main() {
	string str("Hello");
	string::iterator second = str.begin() + 1;             // Iterator to second element
	cout << "Second element is " << *second << endl;

	// end() - begin() gives the number of elements
	string::iterator mid = str.begin() + (str.end() - str.begin())/2;  // Iterator to middle element
	cout << "Middle element is " << *mid << endl;
	
	string::iterator last = str.end() - 1;  // Iterator to last element
	cout << "Last element is " << *last << endl;
}