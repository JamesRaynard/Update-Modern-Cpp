#include <random>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main() {
	vector<int> vec{3, 1, 4, 1, 5, 9};
	static mt19937 mt;

	static bernoulli_distribution berni;
	//static bernoulli_distribution b(0.75);
	int x = 1;
	const int WIDTH = 40;
	int sign = 1;

	while (true) {
		if (berni(mt)) {
			sign = 1;
		}
		else {
			sign = -1;
		}
		if (x == 1) {
			sign = 1;
		}
		if (x == WIDTH) {
			sign = -1;
		}
		x += sign;
		cout << string(x, ' ') << '.' << string(WIDTH-x+1, ' ') << "\r" << flush;
		std::this_thread::sleep_for(100ms);
	}

	return 0;
}