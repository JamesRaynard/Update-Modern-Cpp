#include <iostream>
#include <memory>

using namespace std;

int main() {
	// Create shared_ptr instance
	auto ptr{make_shared<int>(36)};              // ptr's reference count is 1
	cout << "shared_ptr's data is " << *ptr << endl;
	
	// Create weak_ptr which copies ptr
	weak_ptr<int> wptr = ptr;                    // ptr's reference count is still 1
		
	// Destroy ptr
	ptr = nullptr;                               // ptr's reference count is 0, wptr is now dangling
	
	shared_ptr<int> sp1 = wptr.lock();
	//auto sp1 = wptr.lock();
	
	if (sp1) {
		cout << "shared_ptr's data is " << *sp1 << endl;
	}
	else {
		cout << "shared_ptr not available" << endl;
	}
	
	shared_ptr<int> sp2(wptr);
	//auto sp2{ wptr };
}