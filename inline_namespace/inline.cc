namespace A {
    inline namespace B {            // Namespace B is inline to namespace A
        int x;                      // x is a symbol defined in namespace B
    }
    //x;                         // To use x in namespace A, we do not put B:: in front of it
}

int main() {
	A::x = 5;                    // To use x in the global namespace, we put A::
}
