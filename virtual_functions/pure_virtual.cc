#include <iostream>
#include <vector>

using namespace std;

class Drawable {
	public:
	virtual void draw() const = 0;
};

class Circle : public Drawable {
	public:
	void draw() const { cout << "I'm a circle!\n"; }
};

class Triangle : public Drawable {
	public:
	void draw() const { cout << "I'm a triangle!\n"; }
};

void draw_shape(const Drawable& d) {
    d.draw();                                            // Calls draw member function of Circle etc
}

int main() {
	Circle circle;
	draw_shape(circle);
	//Drawable shape;          // Error!
}