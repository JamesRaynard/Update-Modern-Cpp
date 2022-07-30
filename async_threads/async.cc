#include <future>
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::literals;

int func() {
	cout << "Executing func... " << endl;
	std::this_thread::sleep_for(5s);
	return 42;
}

int main() {
	cout << "Calling func..." << std::endl;
	auto result = std::async(func);
	std::this_thread::sleep_for(2s);
	std::cout << "Calling get()" << std::endl;
	std::cout << result.get() << std::endl;
}