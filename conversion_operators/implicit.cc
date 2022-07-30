#include <iostream>

using namespace std;

class test {
	int i{42};
public:
	operator int() const { return i; } 
};

int main() {
	test t;
	cout << t << endl;
}