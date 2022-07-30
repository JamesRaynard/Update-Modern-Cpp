class Base {  virtual void f() {}  };     // Virtual member function f() in base class

class Derived : public Base {
    void f() final {}                    // Derived class re-implements f() and declares it final
};

class Derived2 : public Derived {
    void f() {}                     // Error! Derived2 cannot override f() because it was final in Derived
};
