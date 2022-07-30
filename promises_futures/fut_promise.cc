#include <future>
#include <iostream>
#include <thread>

using namespace std;

void produce(promise<int>& px) {               // Producer function with promise
    int x{42};          
    this_thread::sleep_for(1s);
	cout << "Promise sets shared state to " << x << endl;
    px.set_value(x);				           // Set the result
}

void consume(future<int>& fx) {                // Consumer function with future
	cout << "Future calling get()..." << endl;
    int x = fx.get();				           // Get the result
    cout << "Future returns from calling get()" << endl;
	cout << "The answer is " << x << endl;
}

int main() {
    promise<int> p;
    future<int> f = p.get_future();
    
    thread fut{consume, std::ref(f)};
    thread prom{produce, std::ref(p)};
    
    fut.join();
    prom.join();
}
