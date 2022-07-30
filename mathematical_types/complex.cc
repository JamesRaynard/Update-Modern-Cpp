#include <complex>
#include <iostream>
//#include <cmath>

using namespace std;
using namespace std::literals;

int main() {
	complex<double> p;
	complex<double> q{ 3.0, 4.0 };
	/*
	double real, imag;
	cout << "Enter the real part: ";
	cin >> real;
	cout << "Enter the imaginary part: ";
	cin >> imag;
	complex<double> p{real, imag};
	*/
	cout << "Enter a complex number, e.g. (1.5, 2.7)\n";
	cin >> p;
	cout << "Number entered is " << p << endl;
	cout << "Real part: " << p.real() << ", imaginary part: " << p.imag() << endl;
	cout << p << " is " << ((p == q) ? "" : " not ") << "equal to (3.0, 4.0)" << endl;
	cout << "Adding (3, 4) to it gives " << p+q << endl;
	cout << "Multiplying it by (3, 4) gives " << p*q << endl;
	cout << "Its magnitude is " << abs(p) << endl;
	cout << "Its phase angle is " << arg(p) << endl;
	cout << "Its conjugate is " << conj(p) << endl;
	cout << "Its square is " << pow(p, 2.0) << endl;
	cout << "Its sine is " << sin(p) << endl;
}