#include <thread>
#include <iostream>
#include <string>

using namespace std;

// Callable object - thread entry point
void hello(string arg) {
	cout << arg << endl;
}

int main() {
	// Create std::thread object and initialize it with the task
	std::thread t{ hello, "Hello, Thread!"s };

	// Wait for the thread to complete
	t.join();
}