/*
 * complex.h
 *
 *  Created on: Sep 6, 2018
 *      Author: Lucy
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

class complexNumber {
private:
	int a, b;

public:
	complexNumber();
	complexNumber(int a, int b);

	void setA(int);
	void setB(int);
	friend void operator << (ostream& out, const complexNumber &variable);
	friend void operator >> (istream& in, complexNumber &variable);
	friend complexNumber operator + (const complexNumber& a, const complexNumber &b);
	friend complexNumber operator - (const complexNumber& a, const complexNumber &b);
	friend complexNumber operator * (const complexNumber& a, const complexNumber &b);
	//friend complexNumber &operator = (const complexNumber& a, const complexNumber &b);

	//virtual ~complexNumber();
};

#endif /* COMPLEX_H_ */
