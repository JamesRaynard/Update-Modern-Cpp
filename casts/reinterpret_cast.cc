#include <fstream>

using namespace std;

struct bitmap_file_header {
    char header[2] { 'B', 'M' };
    int32_t file_size;
    int32_t reserved { 0 };
    int32_t data_offset;
};

int main() {
	bitmap_file_header file_header{ /*...*/ };             // Data structure in bitmap format
	
	ofstream file("img.bmp", ios::out|ios::binary);         // Open output file in binary mode
	
	if (file) {
		// Cast data to stream of untyped bytes
		file.write(reinterpret_cast<char *>(&file_header), sizeof(file_header));
		//...
	}
}