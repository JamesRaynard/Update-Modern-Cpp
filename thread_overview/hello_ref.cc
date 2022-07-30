#include <thread>
#include <iostream>
#include <string>

using namespace std;

// Callable object - thread entry point
void hello(const string& arg) {
	cout << arg << endl;
}

int main() {
	string str{ "Hello, Thread!" };
	
	// Create std::thread object and initialize it with the task
	std::thread t{ hello, std::cref(str) };

	// Wait for the thread to complete
	t.join();
}