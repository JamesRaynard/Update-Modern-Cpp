#include <thread>
#include <mutex>
#include <iostream>

using namespace std;

mutex mutex1;
mutex mutex2;

void func1() {
	cout << "Thread 1 is trying to lock the mutexes..." << endl;
	unique_lock<mutex> lk1(mutex1, std::defer_lock);	// Associate mutex with lock...
    unique_lock<mutex> lk2(mutex2, std::defer_lock);	// ...but don’t lock it yet
    lock(lk1, lk2);										// Now lock both of them
	cout << "Thread 1 has locked the mutexes..." << endl;
	cout << "Thread 1 about to release both mutexes..." << endl;
}

void func2() {
	cout << "Thread 2 is trying to lock the  mutexes..." << endl;
    unique_lock<mutex> lk1(mutex1, std::defer_lock);	// ...but don’t lock it yet
	unique_lock<mutex> lk2(mutex2, std::defer_lock);	// Associate mutex with lock...
    lock(lk1, lk2);										// Now lock both of them
	cout << "Thread 2 has locked the mutexes..." << endl;
	cout << "Thread 2 about to release both mutexes..." << endl;
}

int main() {
	thread t1{ func1 };
	thread t2{ func2 };
	t1.join();
	t2.join();
}