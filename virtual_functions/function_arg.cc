#include <iostream>
#include <vector>

using namespace std;

class Drawable {
	public:
	virtual void draw() const { cout << "What am I supposed to do here?\n"; }
};

class Circle : public Drawable {
	public:
	void draw() const { cout << "I'm a circle!\n"; }
};

class Triangle : public Drawable {
	public:
	void draw() const { cout << "I'm a triangle!\n"; }
};

// The static type of d is reference to const Drawable
// The dynamic type of d is reference to const {some class in Drawable hierarchy}
void draw_shape(const Drawable& d) {
    d.draw();                                            // Calls draw member function of Circle etc
}

int main() {
	Circle circle;
	draw_shape(circle);
}