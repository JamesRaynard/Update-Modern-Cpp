#include <thread>
#include <mutex>
#include <iostream>
#include <string>

using namespace std;
using namespace std::literals;

timed_mutex mutex1, mutex2;

void func1() {
	std::this_thread::sleep_for(10ms);
	
	cout << "After you, Claude!" << endl;
    lock(mutex1, mutex2);				               // Lock both mutexes
	unique_lock<timed_mutex> lk1(mutex1, std::adopt_lock);   // Associate each mutex
	unique_lock<timed_mutex> lk2(mutex2, std::adopt_lock);   // with a unique_lock
    std::this_thread::sleep_for(1s);	    
	cout << "Thread1 has locked both mutexes" << endl;
}

void func2() {
	cout << "No, after you, Cecil!" << endl;
    lock(mutex1, mutex2);				               // Lock both mutexes
	unique_lock<timed_mutex> lk1(mutex1, std::adopt_lock);   // Associate each mutex
	unique_lock<timed_mutex> lk2(mutex2, std::adopt_lock);   // with a unique_lock
    std::this_thread::sleep_for(1s);	    
	cout << "Thread2 has locked both mutexes" << endl;
}

int main() {
	thread t1(func1);
	std::this_thread::sleep_for(10ms);
	thread t2(func2);
	t1.join();
	t2.join();
}