#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str("Hello world");
	char c = 'l';
	cout << "The string is " << str << endl;
	cout << "Searching for character " << c << endl;

	string::iterator res = find(str.begin(), str.end(), c);         // Search string for first occurrence of 'l'

	// Check if we found it
	if (res != str.end())
		cout << "Found a matching element at index: " << res - str.begin() << endl;  // Access the result
	else
		cout << "String does not contain " << c << endl;
}