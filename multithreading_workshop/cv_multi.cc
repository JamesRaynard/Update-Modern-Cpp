#include <iostream>
#include <thread>
#include <condition_variable>

using namespace std;
using namespace std::chrono;

// Global variables
mutex mut;
condition_variable cv;
string data {"Empty"};
bool ready{ false };

// Waiting thread
void progress_bar() {
	cout << "Displaying progress bar...\n";
    unique_lock<std::mutex> guard(mut);                                              // Acquire lock
    cv.wait(guard, [] { return ready; });                                      // Wait for condition variable to be notified
    cout << "Progress bar has ended\n";                     // Wake up and use the new value
}

void process_data() {
	cout << "Waiting for data...\n";
    unique_lock<std::mutex> guard(mut);                                              // Acquire lock
    cv.wait(guard, [] { return ready; });                                      // Wait for condition variable to be notified
    cout << "Beginning data processing\n";                     // Wake up and use the new value
}

// Modyifing thread
void fetch_data() {
	{
		lock_guard<std::mutex> lg(mut);                                          // Acquire lock
		cout << "Fetching data..." << endl;
		std::this_thread::sleep_for(2s); // Pretend to be busy...
		data = "Populated";                                                           // Modify the data
		ready = true;
    }
	cout << "Fetch data has ended\n";
	cv.notify_all();                                           // Notify the condition variable
}

int main() {
	thread fetcher{ fetch_data };
	std::this_thread::sleep_for(200ms);
	thread prog{ progress_bar };
	thread processor{ process_data };
	// thread fetcher{ fetch_data };
	
	fetcher.join();
	prog.join();
	processor.join();
	//fetcher.join();
}