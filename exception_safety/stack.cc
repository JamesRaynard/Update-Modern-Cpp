#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	s.push(5);                                         // Populate stack
	auto& t = s.top();                                 // Get reference to the top element of the stack
	
	try {
		s.pop();                                       // Exception is thrown here for some reason
		throw std::bad_alloc();
	} catch (const std::exception& e) {
	    cout << "Exception caught\n";                  // Exception is handled here
	}
	cout << t << endl;                                 // Is this safe?
}