//============================================================================
// Name        : lab7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void convertToBinary (int decimal)
{
	int binary;
	if(decimal != 0)
	{
		binary = decimal % 2;
		if(decimal != 1)
		{
			if(binary == 0)
			{
				convertToBinary(decimal/2);
			}
			else if(binary == 1)
			{
				convertToBinary((decimal-1)/2);
			}
		}
	}
	cout << binary;
}


int main() {

	convertToBinary(1);

}
