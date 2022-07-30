#include <iostream>
#include <thread>
#include <condition_variable>
#include <string>

using namespace std;
using namespace std::chrono;

// Global variables
mutex data_mutex, ready_mutex;
bool ready{false};
string sdata{"Empty"};

// Waiting thread
void reader() {
	bool done{false};
	while (!done) {                            // Wait for data to be modified
		lock_guard<std::mutex> lg(ready_mutex);
		done = ready;
		//this_thread::sleep_for(50ms);
	}
	lock_guard<std::mutex> guard(data_mutex); // Acquire lock
	cout << "Data is " << sdata << endl;       // Wake up and use the new value
}

// Modyifing thread
void writer() {
	cout << "Writing data..." << endl;
	std::this_thread::sleep_for(2s);           // Pretend to be busy...
	lock_guard<std::mutex> sm(data_mutex);     // Protect data
	sdata = "Populated";                       // Modify the data
	lock_guard<std::mutex> rm(ready_mutex);    // Protect ready flag
	ready = true;                              // Set the flag
}

int main() {
	cout << "Data is " << sdata << endl;
	thread read{reader};
    thread write{writer};
	/*
	// If the writer thread finishes before the reader thread starts, the notification is lost
	thread write{writer};
	std::this_thread::sleep_for(500ms);
	thread read{reader};
	*/
	write.join();
	read.join();
}