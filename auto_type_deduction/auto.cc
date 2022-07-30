int main() {
	int x{42};
	const int cx{42};
	const int& rcx{x};

	// A declaration with auto can be rewritten as a call to a template function.
	// The type of the variable is the same as the type that is deduced in the function

	auto& i1 = x;                                     // auto = int, i1 = int&
	//template <typename Auto> void func(Auto& a);
	//func(x);                                        // Auto = int, a = int&, i1 = int&

	auto& i2 = cx;                                    // auto = const int, i2 = const int&
	//template <typename Auto> void func(Auto& a);   
	//func(cx);                                       // Auto = const int, a = const int&, i2 = const int&
	
	auto& i3 = rcx;                                   // auto = const int&, i3 = const int&
	//template <typename Auto> void func(Auto& a);   
	//func(rcx);                                      // Auto = const int, a = const int&, i3 = const int&
	
	const auto& i4 = x;                               // auto = int, i4 = const int&
	//template <typename Auto> void func(const Auto& a);                     
	//func(x);                                        // Auto = int, a = const int&, i1 = const int&
	
	const auto& i5 = cx;                              // auto = int, i5 = const int&
	//template <typename Auto> void func(const Auto& a);   
	//func(cx);                                       // Auto = int, a = const int&, i5 = const int&
	
	const auto& i6 = rcx;                             // auto = int, i6 = const int&
	//template <typename Auto> void func(const Auto& a);   
	//func(rcx);                                      // Auto = int, a = const int&, i6 = const int&
}