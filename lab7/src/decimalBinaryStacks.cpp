/*
 * decimalBinaryStacks.cpp
 *
 *  Created on: Oct 18, 2018
 *      Author: Chris Ben
 */

#include <iostream>
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
	std::cout << binary;
}

