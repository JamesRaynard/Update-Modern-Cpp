#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> v;
	cout << v[2] << endl;            // Invalid element - program continues in undefined state
	cout << v.at(2) << endl;        // Invalid element - exception thrown
}