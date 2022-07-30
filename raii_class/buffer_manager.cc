#include "buffer_manager.h"

#include <iostream>

using namespace std;

// NB initializers are called in the same order as the class members are declared
BufferManager(int size) : size(size), buffer(new char[size]) {
    // Any code needed to configure the new instance
	cout << "Allocating buffer" << endl;
	//throw std::bad_alloc();
}

BufferManager::~BufferManager() {
	cout << "Releasing buffer" << endl;
	delete [] buffer;
}
BufferManager::BufferManager(const BufferManager &other) {
	size = other.size;
	buffer = new char[size];
	throw std::bad_alloc();
	for (int i = 0; i < size; ++i) {
		buffer[i] = other.buffer[i];
	}
}

BufferManager& BufferManager::operator =(const BufferManager& other) {
	if (&other != this) {
		size = other.size;
		buffer = new char[size];
		//throw std::bad_alloc();
		for (int i = 0; i < size; ++i) {
			buffer[i] = other.buffer[i];
		}
		delete [] buffer;
	}
	return *this;
}
/*
BufferManager& BufferManager::operator =(const BufferManager& other) {
	//cout << "Assignment operator" << endl;
	BufferManager temp(other);  
	swap(*this, temp);          
	return *this;
}
*/

/*
void swap(BufferManager& a, BufferManager& b) noexcept {
	std::swap(a.size, b.size);
	std::swap(a.buffer, b.buffer);
}

ostream& operator <<(ostream& os, BufferManager& bm) {
	os << bm.size;
	return os;
}
*/