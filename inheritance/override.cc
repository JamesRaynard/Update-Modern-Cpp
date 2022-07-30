class Vehicle {
public:
    virtual void accelerate() {}
};

class Plane : public Vehicle {
public:
    void accelerate() override;                        // OK - overrides Vehicle::accelerate()
    void accelerate(int height) override;              // Error: does not override
};
