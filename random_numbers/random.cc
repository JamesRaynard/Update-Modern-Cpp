#include <random>
#include <iostream>

using namespace std;

int main() {
	mt19937 mt;                                      // Create engine instance

	cout << "Ten random integers between 0 and 100):" << endl;
	uniform_int_distribution<int> uid(0, 100);       // We want ints in the range 0 to 100

	for (int i = 0; i < 10; ++i) {
		cout << uid(mt) << ", ";                     // Get the next number in the sequence
	}

	cout << endl << endl << "Ten random doubles between 0.0 and 1.0):" << endl;
	uniform_real_distribution<double> did(0, 1);     // Doubles in the range 0 to 1

	for (int i = 0; i < 10; ++i) {                  // Get 10 random numbers
		cout << did(mt) << ", ";
	}
	cout << endl;
}