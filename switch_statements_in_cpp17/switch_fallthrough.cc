#include <iostream>

int main()
{
	char c;
	int ws_count{0};
	
	const char *arr = "How much whitespace in\t here?";
	std::cout << "The text to process is \"" << arr << "\"" << '\n';
	
	for (int i = 0; arr[i]; ++i) {
		switch (const char c = arr[i]; c) {  
		case ' ':                 // c is space character
		[[fallthrough]];
		case '\t':                // c is tab character
		[[fallthrough]];
		case '\n':                // c is newline character
			++ws_count;           // Increment whitespace counter
			break;        
		default:                  // c is not a whitespace character
			break;
		}
	}
	
	std::cout << "The text contains " << ws_count << " whitespace characters\n";
}