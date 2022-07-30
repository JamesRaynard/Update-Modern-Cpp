#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec = {1, 2, 3, 4};
	
	cout << endl << "Removing elements with odd values" << endl;
	auto it = vec.begin();
	while (it != vec.end()) {
		if (*it %2) {
			it = vec.erase(it);                                    // Returns iterator to next element
		}
		else {
			++it;
		}
	}
	
	cout << endl << "Modified vector elements: " << endl;
	for (auto el : vec)
		cout << el << ", ";                                         // Prints out each element of v
}