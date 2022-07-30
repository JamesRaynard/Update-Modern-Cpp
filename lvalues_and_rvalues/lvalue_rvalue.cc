#include <iostream>

using namespace std;

class Test { };

void func(Test& test) {
    std::cout << "lvalue argument\n";
}

void func(const Test& test) {
    std::cout << "const lvalue argument\n";
}

void func(Test&& test) {
    std::cout << "rvalue argument\n";
}

int main() {
    Test test;
    const Test ctest;

    cout << "Calling func(test): ";
    func(test);
    cout << "Calling func(ctest): ";
    func(ctest);
    cout << "Calling func(Test()): ";
    func(Test());
}