#include <iostream>
#include <vector>

using namespace std;

class Drawable {
	public:
	virtual void draw() { cout << "What am I supposed to do here?\n"; }
};

class Circle : public Drawable {
	public:
	void draw() { cout << "I'm a circle!\n"; }
};

class Triangle : public Drawable {
	public:
	void draw() { cout << "I'm a triangle!\n"; }
};

int main() {
	vector<Drawable*> shapes;      // Vector of pointers to Drawable instances

	// Create a pointer to a Drawable instance and append it to the vector 
	shapes.push_back(new Circle());
	shapes.push_back(new Triangle());
	for (vector<Drawable*>::iterator it = shapes.begin(); it != shapes.end(); ++it)
		(*it)->draw();
}