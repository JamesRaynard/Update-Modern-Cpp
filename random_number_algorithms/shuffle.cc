#include <random>
#include <algorithm>
#include <vector>
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
	vector<int> vec{3, 1, 4, 1, 5, 9};
	static mt19937 mt;
	
	for (int i = 0; i < 5; ++i) {
		shuffle(vec.begin(), vec.end(), mt);

		for (auto v: vec)
			cout << v << ", ";

		cout << endl;
		std::this_thread::sleep_for(1s);
	}
	
	return 0;
}