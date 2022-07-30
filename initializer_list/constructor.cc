#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

class Test {
	vector<int> vec;
public:
	Test(initializer_list<int> il) : vec(il) {}
	void print() {
		for (auto i : vec)
			cout << i << ", ";
	}
};

int main() {
	Test test{ 3, 4, 5 };
	test.print();
}