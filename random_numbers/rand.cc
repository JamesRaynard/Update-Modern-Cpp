#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	cout << "Random number (default range): " << rand() << endl;

	cout << "Random number (floating-point between 0 and 1): ";
	cout << 1.0*rand()/RAND_MAX << endl;                          // Convert the result to double!

	cout << endl << "Ten random integers between 1 and 100:" << endl;
	for (int i = 0; i < 10; ++i)
		cout << (99*rand()/RAND_MAX + 1) << ", ";
}