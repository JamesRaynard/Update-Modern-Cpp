#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex print_mutex;			                   // Global mutex instance

void print(string str) {
    for (int i = 0; i < 5; ++i) {
		print_mutex.lock();			           // Lock the mutex before the critical region
        cout << str[0] << str[1] << str[2] << endl;
		print_mutex.unlock();			       // Unlock the mutex afterwards
        this_thread::sleep_for(50ms);               
    }
}

int main() {
	thread t1{print, "abc"};
	thread t2{print, "def"};
	thread t3{print, "xyz"};

	t1.join();
	t2.join();
	t3.join();
}