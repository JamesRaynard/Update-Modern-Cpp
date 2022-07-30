#include <thread>
#include <iostream>

// Callable object - thread entry point
void hello() {
	std::cout << "Hello, Thread!\n";
}

int main() {
	// Create std::thread object and initialize it with the task
	std::thread t{ hello };

	// Wait for the thread to complete
	t.join();
}