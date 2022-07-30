#include <thread>
#include <mutex>
#include <iostream>

using namespace std;

mutex mutex1;
mutex mutex2;

void func1() {
	cout << "Thread 1 is trying to lock mutex 1..." << endl;
	unique_lock<mutex> lk(mutex1);                          // Acquire lock on mutex1
	cout << "Thread 1 has locked mutex 1" << endl;
	std::this_thread::sleep_for(50ms);                      // Do some work
	cout << "Thread 1 is trying to lock mutex 2..." << endl;
	unique_lock<mutex> lk2(mutex2);	                        // Wait for lock on mutex2
	cout << "Thread 1 has locked mutex 2" << endl;
	std::this_thread::sleep_for(50ms);                      // Do some work
	cout << "Thread 1 about to release locks" << endl;
}

void func2() {
	cout << "Thread 2 is trying to lock mutex 2..." << endl;
	unique_lock<mutex> lk(mutex2);                          // Acquire lock on mutex2
	cout << "Thread 2 has locked mutex 2" << endl;
	std::this_thread::sleep_for(50ms);                      // Do some work
	cout << "Thread 2 is trying to lock mutex 1..." << endl;
	unique_lock<mutex> lk2(mutex1);                         // Wait for lock on mutex1
	cout << "Thread 2 has locked mutex 1" << endl;
	std::this_thread::sleep_for(50ms);                      // Do some work
	cout << "Thread 2 about to release locks" << endl;
}

int main() {
	thread t1{ func1 };
	thread t2{ func2 };
	t1.join();
	t2.join();
}