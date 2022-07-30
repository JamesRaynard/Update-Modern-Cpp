#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1{"Hello"};
	string s2{"Goodbye"};

	cout << "Before swapping, s1 = " << s1 << " and s2 = " << s2 << endl;
	s1.swap(s2);
	cout << "After swapping, s1 = " << s1 << " and s2 = " << s2 << endl;
	swap(s1, s2);
	cout << "After another swap, s1 = " << s1 << " and s2 = " << s2 << endl;
}
