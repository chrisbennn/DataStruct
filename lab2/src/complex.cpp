/*
 * complex.cpp
 *
 *  Created on: Sep 6, 2018
 *      Author: Lucy/Chris Ben 009597328
 */

#include "complex.h"
using namespace std;

complexNumber::complexNumber() : a(0), b(0){}
complexNumber::complexNumber(int a, int b) : a(a), b(b){}

void complexNumber::setA(int a1)
{
	a = a1;
}
void complexNumber :: setB (int b1)
{
	b = b1;
}

void operator << (ostream& out, const complexNumber &variable)
{
	out << "(" << variable.a;
	if(variable.b >= 0)
	{
		out << "+" << variable.b << "i)" << endl;
	}
	else
	{
		out << variable.b << "i)" << endl;
	}
}
void operator >> (istream& in, complexNumber &variable)
{
	cout << "Enter Constant Number: ";
	int a;
	int b;
	in >> a;
	cout << "Enter Imaginary Constant Number: ";
	in >> b;

	variable.setA(a);
	variable.setB(b);
}
complexNumber operator + (const complexNumber& a, const complexNumber &b)
{
	return complexNumber((a.a+b.a), (a.b+b.b));
}
complexNumber operator - (const complexNumber& a, const complexNumber &b)
{
	return complexNumber((a.a-b.a), (a.b-b.b));
}
complexNumber operator * (const complexNumber& a, const complexNumber &b)
{
	int as= ((a.a*b.a)-(a.b*b.b));
	int bs =((a.a*b.b)+(a.b*b.a));
	return complexNumber(as, bs);
}

