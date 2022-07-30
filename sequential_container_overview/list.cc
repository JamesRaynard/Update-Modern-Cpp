#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

void print(const list<int>& l) {
	cout << "l elements are: ";
	list<int>::const_iterator  it;
	for (it =  l.begin(); it != l.end(); ++it) {
		cout << *it << ",";
	}
}

int main() {
	list<int> l;       // Create an empty container

	l.push_back(4);     // Create a new element with value 4 at the back
	l.push_back(2);     // Create a new element with value 2 at the back
	l.push_front(1);    // Create a new element with value 1 at the front
	l.push_front(5);    // Create a new element with value 5 at the front
	l.push_front(3);    // Create a new element with value 3 at the front

	cout << "l contains " << l.size() << " elements" << endl;
	cout << "l is" << (l.empty() ? "" : " not") << " empty" << endl;
	
	print(l);
	
	cout << endl << endl << "Sorting deque" << endl;
	l.sort();
	
	print(l);
	
	cout << endl << endl << "Inserting element in list" << endl;
	list<int>::iterator three = find(l.begin(), l.end(), 3);  // Get iterator to element with value 3
	l.insert(three, 0);    // Insert 0 before this element
	
	print(l);
	
	cout << endl << endl << "Removing first element" << endl;
	l.erase(l.begin());
	print(l);
	
	cout << endl << endl << "Clearing deque" << endl;
	l.clear();
	cout << "l contains " << l.size() << " elements" << endl;
	cout << "l is" << (l.empty() ? "" : " not") << " empty" << endl;
	print(l);
}