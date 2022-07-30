#include <future>
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::literals;

int func() {
	cout << "Executing func in thread with ID " << this_thread::get_id() << endl;
	std::this_thread::sleep_for(5s);
	return 42;
}

int main() {
	cout << "In main thread with ID " << this_thread::get_id() << endl;
	cout << "Calling func" << std::endl;
	//auto result = std::async(std::launch::async, func);
	//auto result = std::async(std::launch::deferred, func);
	auto result = std::async(func);
	std::this_thread::sleep_for(2s);
	std::cout << "Calling get()" << std::endl;
	std::cout << result.get() << std::endl;
}