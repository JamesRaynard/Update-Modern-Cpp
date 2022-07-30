#ifndef BUFFERMANAGER_H
#define BUFFERMANAGER_H

//#include <iostream>

class BufferManager {
    private:
        size_t size;
        char *buffer;
    public:
	BufferManager(size_t size=10);
	~BufferManager();
	BufferManager(const BufferManager &other);
	BufferManager& operator =(const BufferManager& other);
	//friend void swap(BufferManager& a, BufferManager& b) noexcept;
	//friend std::ostream& operator <<(std::ostream& os, BufferManager&);
};

#endif // BUFFERMANAGER_H