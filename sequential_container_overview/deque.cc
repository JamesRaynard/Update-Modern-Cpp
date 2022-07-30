#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

void print(const deque<int>& dq) {
	cout << "dq elements are: ";
	deque<int>::const_iterator  it;
	for (it =  dq.begin(); it != dq.end(); ++it) {
		cout << *it << ",";
	}
}

int main() {
	deque<int> dq;       // Create an empty container

	dq.push_back(4);     // Create a new element with value 4 at the back
	dq.push_back(2);     // Create a new element with value 2 at the back
	dq.push_front(1);    // Create a new element with value 1 at the front
	dq.push_front(5);    // Create a new element with value 5 at the front
	dq.push_front(3);    // Create a new element with value 3 at the front

	cout << "dq contains " << dq.size() << " elements" << endl;
	cout << "dq is" << (dq.empty() ? "" : " not") << " empty" << endl;
	
	print(dq);
	
	cout << endl << endl << "Sorting deque" << endl;
	sort(dq.begin(), dq.end());
	
	print(dq);
	
	cout << endl << endl << "Inserting element in deque" << endl;
	deque<int>::iterator three = find(dq.begin(), dq.end(), 3);  // Get iterator to element with value 3
	dq.insert(three, 0);    // Insert 0 before this element
	
	print(dq);
	
	cout << endl << endl << "Removing first element" << endl;
	dq.erase(dq.begin());
	print(dq);
	
	cout << endl << endl << "Clearing deque" << endl;
	dq.clear();
	cout << "dq contains " << dq.size() << " elements" << endl;
	cout << "dq is" << (dq.empty() ? "" : " not") << " empty" << endl;
	print(dq);
}