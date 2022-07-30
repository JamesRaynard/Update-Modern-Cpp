#include <iostream>

using namespace std;

int main() {
	int a[20] = {0};
	
	int i;
	for (i = 0; i < 20; ++i)
		a[i] = i;
	
	for (int j = 0; j < 20; ++j)
		a[j] = 2*j;
	
	for (int j = 0; j < 20; ++j)
		cout << a[j] << ", ";
	cout << j << endl;
}