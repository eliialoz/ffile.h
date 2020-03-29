#ifndef COMLEX
#define COMLEX

#include"mytypes.h"
#include"rational.h"



struct Comlex
{
	double real;
	double imaginary;
};

Comlex& comlexCtor(double, double);

Comlex& comlexCtor(Rational);

double abs(Comlex&);

void addComplex(void*, const void*, const void*);

void subComplex(void*, const void*, const void*);

void subComplex(void*, const void*, const void*);

int compareComlex(const void*, const void*);

Comlex operator + (const Comlex&, const Comlex&);
Comlex operator - (const Comlex&, const Comlex&);
Comlex operator * (const Comlex&, const Comlex&);
Comlex operator < (const Comlex&, const Comlex&);
Comlex operator > (const Comlex&, const Comlex&);
Comlex operator <=(const Comlex&, const Comlex&);
Comlex operator >=(const Comlex&, const Comlex&);
Comlex operator ==(const Comlex&, const Comlex&);
Comlex operator !=(const Comlex&, const Comlex&);

istream& operator >>(istream&, Comlex&);
ostream& operator >>(ostream&, Comlex&);
#endif
