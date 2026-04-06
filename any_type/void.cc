#include <iostream>

int main()
{
	double d{ 3.14159 };
	void *p = &d;         // Pointer to void can point to any type
	
	// Cast to pointer to original type
	double *pd = static_cast<double *>(p);
	std::cout << *pd << '\n';
}