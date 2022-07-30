#include <iostream>
#include <thread>

using namespace std;

void print(string str) {
    for (int i = 0; i < 5; ++i) {
        cout << str[0] << str[1] << str[2] << endl;     
        std::this_thread::sleep_for(50ms);               
    }
}

int main() {
	std::thread t1{print, "abc"};
	std::thread t2{print, "def"};
	std::thread t3{print, "xyz"};

	t1.join();
	t2.join();
	t3.join();
}