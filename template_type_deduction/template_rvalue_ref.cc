#include <iostream>
#include <string>

using namespace std;

template <typename T> void func(T&& arg) {
	cout << "ArgType: ";
	using arg_no_ref = remove_reference_t<decltype(arg)>;
	using arg_no_ptr = remove_pointer_t<decltype(arg)>;
	
	if constexpr(is_pointer_v<decltype(arg)>) {	
		cout << "pointer to ";
		if constexpr(is_const_v<arg_no_ptr>) {
			cout << "const ";
		}
	}

	if constexpr(is_lvalue_reference_v<decltype(arg)>) {
		cout << "lvalue reference to ";
	}
	if constexpr(is_rvalue_reference_v<decltype(arg)>) {
		cout << "rvalue reference to ";
	}

	if constexpr(is_array_v<arg_no_ref>) {	
		cout << "array of ";
	}
	
	if constexpr(is_const_v<decltype(arg)>) {
		cout << "const ";
	}
	cout << "int";
	
	cout << ", T: ";
	
	using t_no_ref = remove_reference_t<T>;
	using t_no_ptr = remove_pointer_t<T>;
	
	if constexpr(is_pointer_v<T>) {	
		cout << "pointer to ";
		if constexpr(is_const_v<t_no_ptr>) {
			cout << "const ";
		}
	}
	
	if constexpr(is_lvalue_reference_v<T>) {
		cout << "lvalue reference to ";
	}
	if constexpr(is_rvalue_reference_v<T>) {
		cout << "rvalue reference to ";
	}
	if constexpr(is_array_v<T>) {
		cout << "array of ";
	}
	if constexpr(is_const_v<t_no_ref>) {
		cout << "const ";
	}
	cout << "int";
}

int main() {
	int x{42};
	const int cx{42};
	const int& rcx{x};

	cout << "func(x): ";
	func(x);                        // ArgType = int&, T = int&
	cout << "\nfunc(cx): ";
	func(cx);                       // ArgType = const int&, T = const int&
	cout << "\nfunc(rcx): ";
	func(rcx);                      // ArgType = const int&, T = const int&
	cout << "\nfunc(42): ";	
	func(42);                     // 42 = rvalue, ArgType = int&&, T = int
	
	int arr[] = {42, 99};
	cout << "\nfunc(arr): ";	
	func(arr);                     //  ArgType = const int*, T = const int*
}