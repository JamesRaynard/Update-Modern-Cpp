class Vehicle {
protected:
    void accelerate() {}
};

class Aeroplane : public Vehicle {
public:
    void accelerate() {}
};

int main() {
	Aeroplane plane;
	plane.accelerate();
}