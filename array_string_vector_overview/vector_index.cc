#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;                            // No general way to initialize vector elements in C++03  
	vec.push_back(4);                           // Therefore we create an empty vector, then add elements
	vec.push_back(2);                           // push_back adds a new element after the last element
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(1);

	cout << "Element with index 0 has value " << vec[0] << endl;     // The first element in vec - this will be equal to 4
	cout << "Element with index 2 has value " << vec[2] << endl;     // The third element in vec - this will be equal to 3
	cout << "Element with index 4 has value " << vec[4] << endl;     // The fourth element in vec - this will be equal to 5
	
	cout << endl << "Modifying element with index 2 to have value 6" << endl;
	vec[2] = 6;                                 // Changes the third element in vec from 3 to 6

	cout << endl << "Printing out all elements: " << endl;
	
	// The size() member function returns the number of elements
	int i;
	for (i = 0; i < vec.size(); ++i) {
		cout << "Element with index " << i << " has value " << vec[i] << endl;
	}
}