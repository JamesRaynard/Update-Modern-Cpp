#include <iostream>
#include <string>

using namespace std;

int main() {
	string str("Hello");
	
	for (string::reverse_iterator it = str.rbegin(); it != str.rend(); ++it)
        cout << *it << ", ";
}