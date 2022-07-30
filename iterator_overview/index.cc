#include <iostream>
#include <vector>

using namespace std;

int main() {
	int x[] = {1, 2, 3};                 // Array with three elements

	for (int i = 0; i != 3; ++i)      // Stop iterating when index == 3
		cout << x[i] << ", ";
}