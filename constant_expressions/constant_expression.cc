#include <iostream>

using namespace std;

int main() {
	int x, y;
	cout << "Enter i: ";
	cin >> x;
	cout << "\nEnter j: ";
	cin >> y;
	const int i{x}, j{y};           // i and j are constant expressions
	int arr[i+j];                   // Array dimension must be a constant expression
}