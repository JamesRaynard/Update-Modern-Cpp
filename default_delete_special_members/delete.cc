class test {
public:
    test(const test&) = delete;                    // Deleted copy constructor
    test& operator =(const test&) = delete;        // Deleted assignment operator
public:
    test() = default;                              // Default constructor
};

int main() {
	test t1, t2;                                   // Use defaulted constructor
	test t3(t1);                                   // Error: use of deleted function
	t2 = t1;                                       // Error: use of deleted function
}
