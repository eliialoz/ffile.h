#ifndef RATIONAL
#define RATIONAL

#include"mytypes.h"
#include<iostream>
using namespace std;

struct Rational
{
	int numerator;
	uint denominator;
};

Rational& rationalCtor(int numerator, uint denominator = 1);

// the function returns the largest divider of the two numbers
uint gcd(uint, uint);

// the function returns the redced fraction
Rational reductFraction(int, uint);

void addRational(void*, const void*, const void*);

void subRational(void*, const void*, const void*);

void multRational(void*, const void*, const void*);

int compareRational(const void*, const void*);

Rational operator + (const Rational&, const Rational&);
Rational operator - (const Rational&, const Rational&);
Rational operator * (const Rational&, const Rational&);
Rational operator < (const Rational&, const Rational&);
Rational operator > (const Rational&, const Rational&);
Rational operator <=(const Rational&, const Rational&);
Rational operator >=(const Rational&, const Rational&);
Rational operator ==(const Rational&, const Rational&);
Rational operator !=(const Rational&, const Rational&);
istream& operator >>(istream&, Rational&);
ostream& operator >>(ostream&, Rational&);
#endif
