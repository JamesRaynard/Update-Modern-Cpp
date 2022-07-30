#include <iostream>
#include <string>

using namespace std;

int main() {
	string str ("Hello world");
	cout << "The string is \"" << str << "\"" << endl;
	cout << "First occurrence of \'o\' is at index " << str.find('o') << endl;     // Returns 4
	cout << "First occurrence of \"or\" is at index " << str.find("or") << endl;   // Returns 7

	cout << "Does 'O' occur in the string? ";
	
	if (str.find('O') == string::npos)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}