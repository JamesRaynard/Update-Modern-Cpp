#include <queue>                        
#include <iostream>

using namespace std;

int main() {
	queue<int> q;                                  // Create a queue instance
	q.push(4);                                     // Add some elements to it
	q.push(3);
	q.push(5);
	q.push(1);

	cout << "The queue contains " << q.size() << " elements\n";
	cout << "The first element is "<< q.front() << endl;
	cout << "The last element is "<< q.back() << endl;

	// Remove the first element
	cout << "Removing first element\n";
	q.pop();
	cout << "The first element is now "<< q.front() << endl;
	cout << "The last element is now "<< q.back() << endl;
}