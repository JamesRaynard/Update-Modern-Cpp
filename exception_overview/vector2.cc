#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> v;
	try {
		cout << v.at(2) << endl;                // Throws an exception
	}
	catch (const std::exception& e) {           // Will handle all subclasses of std::exception
		cout << "Exception caught: " << e.what() << endl;               // Print out a description of the exception
	}
}