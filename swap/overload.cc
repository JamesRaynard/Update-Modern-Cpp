#include <iostream>

using namespace std;

class BufferManager {
  private:
    int size;
    char *buffer;
  public:
	BufferManager(int size) : size(size), buffer(new char[size]) {}
	~BufferManager() { delete [] buffer; }
	
	// Declare overloaded swap() as a friend of this class
    friend void swap(BufferManager& l, BufferManager& r) noexcept;
	
	void print() {
		cout << "BufferManager with size = " << size;
		cout << ": buffer address is " << static_cast<void *>(buffer);
	}
};

inline void swap(BufferManager& l, BufferManager& r) noexcept {
    using std::swap;                  // Important!
    swap(l.size, r.size);
    swap(l.buffer, r.buffer);
}

int main() {
	BufferManager a(5), b(6);
	cout << "Before swapping\n";
	cout << "a is ";
	a.print();
	cout << endl << "b is ";
	b.print();
	
	swap(a, b);
	
	cout << endl << endl << "After swapping\n";
	cout << "a is ";
	a.print();
	cout << endl << "b is ";
	b.print();
	cout << endl;
	
}