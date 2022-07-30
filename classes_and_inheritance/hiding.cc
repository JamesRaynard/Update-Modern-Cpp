class Vehicle {
public:
    void accelerate() {}
};

class Aeroplane : public Vehicle {
public:
    void accelerate(int height) {}                     // Overload hides parent's accelerate()
    // using Vehicle::accelerate;                      // Makes parent's version of accelerate() available
};

int main() {
	Aeroplane plane;
	plane.accelerate();
}