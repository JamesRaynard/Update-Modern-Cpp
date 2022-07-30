#include <future>
#include <iostream>

using namespace std;

int main() {
	// Packaged task with lambda as task function
	packaged_task<int(int, int)> ptask( [] (int a, int b) { return a + b;} );

	future<int> fut = ptask.get_future();	     // The future for packaged_task's promise
	
	ptask(6, 7);                                 // Call packaged_task - will run in separate thread
	cout << "6 + 7 is " << fut.get() << endl;    // Get the result from the packaged_task's future
}