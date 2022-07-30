#include <set>
#include <iostream>

using namespace std;

void print(const multiset<int>& s) {
	cout << "Set values: ";
	multiset<int>::iterator it;
	for (it = s.begin(); it != s.end(); ++it)
	 cout << *it << ",";
	cout << endl;
}

int main() {
	multiset<int> s;                        // Create an instance of std::set
	s.insert(6);                            // Add some elements to it
	s.insert(7);
	s.insert(4);
	s.insert(6);                            // Add duplicate elements
	s.insert(6);

	print(s);
}