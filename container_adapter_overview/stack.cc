#include <stack>                        
#include <iostream>

using namespace std;

int main() {
	stack<int> s;                               // Create a stack instance
	s.push(1);                                   // Add some elements to it
	s.push(2);
	s.push(5);
	s.push(3);

	cout << "Top element is "<< s.top() << endl;
	cout << "Removing top element\n";
	s.pop();                                        // Remove the top element
	cout << "Top element is now "<< s.top() << endl;
}