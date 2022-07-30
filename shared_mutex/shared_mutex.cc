#include <iostream>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::literals;

shared_timed_mutex the_mutex;
//mutex the_mutex;

void write(int i) {
	lock_guard<shared_timed_mutex> lg(the_mutex);
	//lock_guard<mutex> lg(the_mutex);
	cout << "Write thread " << i << " with exclusive lock" << endl;
	this_thread::sleep_for(2s);
}

void read(int i) {
	shared_lock<shared_timed_mutex> sl(the_mutex);
	//unique_lock<mutex> sl(the_mutex);
	cout << "Read thread " << i << " with shared lock" << endl;
}

int main() {
	vector<thread> threads;
	
	for (int i = 0; i < 5; ++i)
		threads.push_back(thread{read, i});
	
	threads.push_back(thread{write, 5});
	threads.push_back(thread{write, 6});
	
	for (int i = 0; i < 10; ++i)
		threads.push_back(thread{read, i+7});
	
	for (auto& t : threads)
		t.join();
}