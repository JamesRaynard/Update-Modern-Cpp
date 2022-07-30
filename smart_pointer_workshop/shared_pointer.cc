#include <iostream>

using namespace std;

template <typename T>
class shared_pointer {
	T *data;                         // The allocated memory
	int *counter;                    // The reference counter
public:
	// Constructor
	// Allocate reference counter and initialize it to 1
	shared_pointer(T *t) : data(t), counter(new int(1)) {}
	
	// Destructor
	// Decrement reference counter
	// If this is the last object using the allocated memory, the counter will be 0
	// Release the allocated memory and the counter
	~shared_pointer() {
		if (--*counter == 0) {
			delete data;
			delete counter;
		}
	}
	
	// Copy constructor
	// Copy the pointers and increment the counter
	shared_pointer(const shared_pointer& other) : data(other.data), counter(other.counter) {
		++*counter;
	}
	
	// Assignment operator
	// If both objects already share the same allocated memory, no new references are created
	// and the data and counter pointers already have the correct value. Do nothing
	// If they refer to different allocations, then do the usual destructor + copy constructor
	shared_pointer& operator=(const shared_pointer& other) {
		if (data != other.data) {
			if (--*counter == 0) {
				delete data;
				delete counter;
			}
			data = other.data;
			counter = other.counter;
			++counter;
		}
		return *this;
	}
	
	// Alternative implementation with copy-swap idiom
	/*
	void swap(shared_pointer&other) {
		std::swap(data, other.data);
		std::swap(counter, other.counter);
	}
	shared_pointer& operator=(const shared_pointer& other) {
		if (data != other.data) {
			shared_pointer temp(other);
			swap(temp);
		}
		return *this;
	}
	*/
	// Dereferencing operators
	T& operator *() const { return *data; }
	T operator ->() const { return *data; }
};

int main() {
	shared_pointer<int>	sp(new int(36));
	cout << "Shared pointer data: " << *sp << endl;
	
	auto sp2 = sp;
	cout << "Copied shared_ptr's data is " << *sp2 << endl;
	
	shared_pointer<int> sp3(nullptr);
	sp3 = sp;
	cout << "Assigned shared_ptr's data is " << *sp3 << endl;
	
}