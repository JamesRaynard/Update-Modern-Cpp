#include <iostream>

using namespace std;

class test {
	int i{42};
public:
	explicit operator int() const { return i; }        // Explicit conversion operator to int
	explicit operator bool() const { return i; }       // Explicit conversion operator to bool
};

int main() {
	test t;
	// cout << t << endl; // Error: no match for operator <<
	cout << static_cast<int>(t) << endl;              
	
	if (t)
		cout << "OK" << endl;
}