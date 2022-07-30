#include <iostream>

using namespace std;

class Test {
	int t;
	public:
	explicit Test(int t_in) : t(t_in) {}
};

int main() {
	Test t(4);
}