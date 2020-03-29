#ifndef COMPLEX_H
#define COMPLEX_H

#include"rational.h"

struct Complex
{
	double real;
	double imaginary;
};
//The function accepts 2 numbers and returns the complex number
//If the user entered only one number, the imaginary value would be initialized in the 0
Complex& ComplexCtor(double, double);

//The function accepts rational numer and returns complex number 
//The real part is equal to the rational number and the imaginary part is equal to 0
Complex& ComplexCtor(Rational&);

//The function accepts  a complex number and returns its length
double abs(Complex&);

//The function accepts 2 complex numbers and adds to each other
void addComplex(void*, const void*, const void*);

//The function accepts 2 complex numbers and returns one minus the other
void subComplex(void*, const void*, const void*);

//The function accepts 2  complex numbers and returns one double the other
void subComplex(void*, const void*, const void*);

//The function receives 2 complex numbers and compares them
//If they are equal the function returns 0
//If the first number is greater than the second number the function returns 1
//If the first number is less than the second number the function returns - 1
int compareComplex(const void*, const void*);

//The function does operator overloading Of operation plus
Complex operator + (const Complex&, const Complex&);

//The function does operator overloading Of operation minus
Complex operator - (const Complex&, const Complex&);

//The function does operator overloading Of operation multiplication
Complex operator * (const Complex&, const Complex&);

//The function does operator overloading Of operation <
Complex operator < (const Complex&, const Complex&);

//The function does operator overloading Of operation >
Complex operator > (const Complex&, const Complex&);

//The function does operator overloading Of operation <=
Complex operator <=(const Complex&, const Complex&);

//The function does operator overloading Of operation >=
Complex operator >=(const Complex&, const Complex&);

//The function does operator overloading Of operation == Between the length of the composite numbers
Complex operator ==(const Complex&, const Complex&);

//The function does operator overloading Of operation != Between the length of the composite numbers
Complex operator !=(const Complex&, const Complex&);

//The function does operator overloading Of operation >>
istream& operator >>(istream&, Complex&);

//The function does operator overloading Of operation <<
ostream& operator >>(ostream&, Complex&);
#endif
