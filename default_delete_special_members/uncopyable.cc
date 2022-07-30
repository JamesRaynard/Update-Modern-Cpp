class test {
private:
    test(const test&);                     // Copy constructor is private
    test& operator =(const test&);         // Assignment operator is private
public:
    test() {}
};

int main() {
    test t1, t2;                           // Use default constructor
    //test t3(t1);                         // Error: copy constructor is private
    //t2 = t1;                             // Error: assignment operator is private
}
