#include <forward_list>
#include <iostream>
#include <algorithm>

using namespace std;

void print(const forward_list<int>& fl) {
	cout << "List elements are: ";
	for (auto node : fl)
		cout << node << ",";
}

int main() {
	forward_list<int> fl;       // Create an empty container

	fl.push_front(2);    // Create a new element with value 4
	fl.push_front(4);    // Create a new element with value 2
	fl.push_front(1);    // Create a new element with value 1
	fl.push_front(5);    // Create a new element with value 5
	fl.push_front(3);    // Create a new element with value 3

	//cout << "fl contains " << fl.size() << " elements" << endl;
	cout << "fl is" << (fl.empty() ? "" : " not") << " empty" << endl;
	
	print(fl);
	
	cout << endl << endl << "Sorting list" << endl;
	fl.sort();
	
	print(fl);
	
	cout << endl << endl << "Inserting element in list" << endl;
	auto three = find(fl.begin(), fl.end(), 3);      // Get iterator to element with value 3
	fl.insert_after(three, 0);                       // Insert 0 before this element
	
	print(fl);
	
	cout << endl << endl << "Removing first element" << endl;
	fl.erase_after(fl.before_begin());
	print(fl);
	
	cout << endl << endl << "Clearing list" << endl;
	fl.clear();
	//cout << "l contains " << l.size() << " elements" << endl;
	cout << "fl is" << (fl.empty() ? "" : " not") << " empty" << endl;
	print(fl);
}