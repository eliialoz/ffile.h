#ifndef COMPLEX_H
#define COMPLEX_H

#include"rational.h"

struct Complex
{
	double real;
	double imaginary;
};

Complex& ComplexCtor(double, double);

Complex& ComplexCtor(Rational&);

double abs(Complex&);

void addComplex(void*, const void*, const void*);

void subComplex(void*, const void*, const void*);

void subComplex(void*, const void*, const void*);

int compareComplex(const void*, const void*);

Complex operator + (const Complex&, const Complex&);
Complex operator - (const Complex&, const Complex&);
Complex operator * (const Complex&, const Complex&);
Complex operator < (const Complex&, const Complex&);
Complex operator > (const Complex&, const Complex&);
Complex operator <=(const Complex&, const Complex&);
Complex operator >=(const Complex&, const Complex&);
Complex operator ==(const Complex&, const Complex&);
Complex operator !=(const Complex&, const Complex&);

istream& operator >>(istream&, Complex&);
ostream& operator >>(ostream&, Complex&);
#endif
