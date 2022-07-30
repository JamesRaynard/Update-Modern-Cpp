#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& vec) {
	for (auto i : vec)
		cout << i << ", ";
	cout << endl;
}

int main() {
	vector<int> vec{1, 2, 3, 4, 5};

	cout << "Original vector: ";
	print(vec);

	cout << "\nCalling insert with arguments begin(), 0\n";
	vec.insert(vec.begin(), 0);    // Insert element with value 0 before first element
	print(vec);

	cout << "Calling insert with arguments end(), 3, 6\n";
	vec.insert(vec.end(), 3, 6);      // Insert 3 elements with value 6 after last element
	print(vec);

	vector<int> vec2{3, 1, 4, 1, 5, 9};
	cout << "\nvec2: ";
	print(vec2);

	cout << "\nCalling insert on vec with arguments vec.begin(), vec2.begin(), vec2.end()\n";
	vec.insert(vec.begin(), vec2.begin(), vec2.end());      // Insert all elements from vec2 before first element
	print(vec);

	cout << "\nCalling insert on vec2 with arguments vec2.end(), {2, 6, 5}\n";
	vec2.insert(vec2.end(), {2, 6, 5});
	print(vec2);
}