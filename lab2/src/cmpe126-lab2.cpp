//============================================================================
// Name        : lab2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "complex.h"

using namespace std;



int main() {
	string line;
	ifstream fileIn;
	fileIn.open("complexInput.txt");

	if(fileIn)
	{
		while(getline(fileIn, line))
		{
			if (line != "(3+4i) * (5-6i)")
			{
				cout << line;
			}
			else
			{

			}
		}
	}
	else
	{
		cout << "Could not find file" << endl;
		exit(1);
	}
	fileIn.close();
	string a1S = line.substr(1,1);
	string b1S = line.substr(3,1);
	string a2S = line.substr(10,1);
	string b2S = line.substr(11,2);

	int a1 = stoi(a1S);		//theres got to be a better way in doing this
	int b1 = stoi(b1S);		//but i can think of anything!!!! but i know there is one!!!
	int a2 = stoi(a2S);		//what si wrong with meeee!
	int b2 = stoi(b2S);


	complexNumber CN1; 				//error with cn1(1,2) also with cn2
	CN1.setA(a1); CN1.setB(b1);
	complexNumber CN2;
	CN2.setA(a2); CN2.setB(b2);

	complexNumber Mult;

	Mult = (CN1*CN2);

	ofstream fileOut;
	fileOut.open("complexOutput.txt");

	fileOut << Mult;

	fileOut.close();
	return 0;
}
