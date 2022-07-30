#include <iostream>
#include <thread>
#include <vector>

#include "semaphore.h"

Semaphore s;

void insert(int i) {
	s.put();
	std::cout << "Task " << i << " added one item\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(50));
}

void relinquish(int i) {
	s.take();
	std::cout << "Task " << i << " relinquished one item\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(50));
}

int main() {
	std::vector<std::thread> tasks;
	for (int i = 0; i < 2; ++i)
		tasks.push_back(std::thread(insert, i));
	for (int i = 0; i < 4; ++i)
		tasks.push_back(std::thread(relinquish, i + 2));
	for (int i = 0; i < 3; ++i)
		tasks.push_back(std::thread(insert, i + 6));
	for (auto& task : tasks) {
		task.join();
	}
}