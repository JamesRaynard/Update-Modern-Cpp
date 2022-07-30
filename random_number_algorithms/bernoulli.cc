#include <random>
#include <iostream>

using namespace std;

int main() {
	static mt19937 mt;
	
	static bernoulli_distribution berni;

	for (int i = 0; i < 5; ++i) {
		if (berni(mt))
		cout << "Your subjects are grateful for your wise and benevolent rule\n";
		else
		cout << "The peasants are revolting!\n";
	}
	return 0;
}