#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex print_mutex;			                           // Global mutex instance

void print(string str) {
    for (int i = 0; i < 5; ++i) {
		unique_lock<mutex> lk(print_mutex);	           // Create unique_lock - acquires lock
        cout << str[0] << str[1] << str[2] << endl;
		print_mutex.unlock();			               // Unlock the mutex afterwards
		this_thread::sleep_for(50ms);                  // Non-critical region
    }					                               // Destroy unique_lock - releases lock
}

int main() {
	thread t1{print, "abc"};
	thread t2{print, "def"};
	thread t3{print, "xyz"};

	t1.join();
	t2.join();
	t3.join();
}