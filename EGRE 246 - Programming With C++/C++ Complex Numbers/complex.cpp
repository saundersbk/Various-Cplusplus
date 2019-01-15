#include <iostream>
#include "complex.h"

using namespace std;
using std::ostream;

//Constructors
complex::complex() {
	real = 0.0;
	imag = 0.0;
	return;
}

complex::complex(double real, double imag) {
	this->real = real;
	this->imag = imag;
	return;
}


//Accessors
double complex::getReal() {
	return real;
}

double complex::getImag() {
	return imag;
}


//Overload + operator
complex complex::operator+(complex rhs) {
	complex temp;
	temp.real = real + rhs.real;
	temp.imag = imag + rhs.imag;
	return temp;
}

complex operator+(complex lhs, double rhs) {
	complex temp;
	temp.real = lhs.real + rhs;
	temp.imag = lhs.imag;
	return temp;
}

complex operator+(double lhs, complex rhs) {
	complex temp;
	temp.real = lhs + rhs.real;
	temp.imag = rhs.imag;
	return temp;
}

//Overload - operator
complex complex::operator-(complex rhs) {
	complex temp;
	temp.real = real - rhs.real;
	temp.imag = imag - rhs.imag;
	return temp;
}

complex operator-(complex lhs, double rhs) {
	complex temp;
	temp.real = lhs.real - rhs;
	temp.imag = lhs.imag;
	return temp;
}

complex operator-(double lhs, complex rhs) {
	complex temp;
	temp.real = lhs - rhs.real;
	temp.imag = rhs.imag;
	return temp;
}


//Overload << operator
ostream& operator<<(ostream& os, complex& num) {
	os << num.real << " + j(" << num.imag << ")";
	return os;
}
