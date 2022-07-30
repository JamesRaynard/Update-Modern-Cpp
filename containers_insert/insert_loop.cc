#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& vec) {
	for (auto i : vec)
		cout << i << ", ";
	cout << endl;
}

int main() {
	vector<int> vec;
	auto it = vec.begin();           // First element will be added at start of list
	int i;

	while (cin >> i)
		it = vec.insert(it, i);      // Add element. Next element will be added before this one
	
	print(vec);
}