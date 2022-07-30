#include <iostream>

using namespace std;

class X { };

void g(X& x) {
    std::cout << "Modifiable version of g\n";
}

void g(const X& x) {
    std::cout << "Immutable version of g\n";
}

void g(X&& x) {
    std::cout << "Move version of g\n";
}

template <class T>
void f(T&& x) {
    g(x);
}

int main() {
    X x;
    const X cx;

    cout << "Lvalue\n";
    f(x);
    cout << "Const lvalue\n";
    f(cx);
    cout << "Rvalue reference\n";
    f(std::move(x));
}