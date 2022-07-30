#include <set>
#include <iostream>

using namespace std;

void print(const set<int>& s) {
	cout << "Set values: ";
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); ++it)
	 cout << *it << ",";
	cout << endl;
}

int main() {
	set<int> s;                             // Create an instance of std::set
	s.insert(6);                            // Add some elements to it
	s.insert(7);
	s.insert(4);
	s.insert(5);
	s.insert(3);

	print(s);	
	cout <<  endl << "Trying to insert element with value 3" << endl;
	pair<set<int>::iterator, bool> ret = s.insert(3);          // Try to insert an element with value 3
	if (ret.second)                                            // Did it work?
		cout << "Added value 3 to set\n";
	else
		cout << "Set already contains " << *(ret.first) << endl;

	cout << "Erasing element with value 3" << endl;
	s.erase(3);                                                // Erase the element with value 3
	
	print(s);
	
	cout <<  endl << "Trying to insert element with value 3" << endl;
	pair<set<int>::iterator, bool> ret2 = s.insert(3);         // Try to insert the element again
	if (ret2.second)                                           // Did it work?
		cout << "Added value 3 to set\n";
	else
		cout << "Set already contains " << *(ret.first) << endl;
	
	print(s);
}