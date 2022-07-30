#include <iostream>
#include <memory>

using namespace std;

int main() {
	auto ptr{make_shared<int>(36)};
	cout << "shared_ptr's data is " << *ptr << endl;
	
	auto ptr2 = ptr;
	cout << "Copied shared_ptr's data is " << *ptr << endl;
	
	shared_ptr<int> ptr3;
	ptr3 = ptr;
	cout << "Assigned shared_ptr's data is " << *ptr << endl;
}