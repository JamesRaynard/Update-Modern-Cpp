#include <iostream>
#include <string>

using namespace std;

int main() {
	string str("Hello");
	
	for (string::const_iterator it = str.begin(); it != str.end(); ++it)
        cout << *it << ", ";
}