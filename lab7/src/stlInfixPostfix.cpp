/*
 * stlInfixPostfix.cpp
 *
 *  Created on: Oct 15, 2018
 *      Author: Lucy
 */

#include <string>
#include <iostream>
#include <ctype.h>
#include "arrayStack.h"
#include <stdlib.h>
#include <cstdlib>
int prec(char c)
{

    if(c == '*' || c == '/')
    {
    	return 2;
    }
    else if(c == '+' || c == '-')
    {
    	return 1;
    }
    else
    {
    	return -1;
    }
}

double evaluatePostFix(std::string expression)
{
	std::string digit = "";
	myStack<std::string> postfixSolver;
	double solution;
	for(int i = 0; i < expression.length(); i++)
	{
		if(isdigit(expression.at(i)))
		{
			digit+= expression[i];
		}
		if(expression[i] == ' ')
		{
			if(digit != "")
			{
				postfixSolver.push(digit);
				digit = "";
			}
		}
		if(expression[i] == '*')
		{
			std::string temp = postfixSolver.pop(); // i know it aint eff to the same function over & over
			std::string temp2 = postfixSolver.pop();
			double tempD = atof(temp.c_str());
			double tempD2 = atof(temp2.c_str());
			tempD = tempD * tempD2;
			postfixSolver.push(std::to_string(tempD));
		}
		else if(expression[i] == '/')
		{
			std::string temp = postfixSolver.pop();
			std::string temp2 = postfixSolver.pop();
			double tempD = atof(temp.c_str());
			double tempD2 = atof(temp2.c_str());
			tempD = tempD / tempD2;
			postfixSolver.push(std::to_string(tempD));
		}
		else if(expression[i] == '+')
		{
			std::string temp = postfixSolver.pop();
			std::string temp2 = postfixSolver.pop();
			double tempD = atof(temp.c_str());
			double tempD2 = atof(temp2.c_str());
			tempD = tempD + tempD2;
			postfixSolver.push(std::to_string(tempD));
		}
		else if(expression[i] == '-')
		{
			std::string temp = postfixSolver.pop();
			std::string temp2 = postfixSolver.pop();
			double tempD = atof(temp.c_str());
			double tempD2 = atof(temp2.c_str());
			tempD = tempD - tempD2;
			postfixSolver.push(std::to_string(tempD));
		}

	}
	std::string temp = postfixSolver.pop();
	solution = atof(temp.c_str());
	std::cout << solution;
}
void infixToPostfix(std::string infix)
{
	std::stack<char> stacked;
	std::string postfix;
	for(int i = 0; i < infix.length(); i++)
	{

		if((infix[i] >= 'a' && infix[i] <= 'z')||(infix[i] >= 'A' && infix[i] <= 'Z'))
		{
			postfix+=infix[i];
		}
		else if(infix[i] == '(')
		{
			stacked.push('(');
		}
		else if(infix[i] == ')')
		{
			while(!stacked.empty() && stacked.top() != '(')
			{
				char temp = stacked.top();
				stacked.pop();
				postfix += temp;
			}
			if(stacked.top() == '(')
			{
				char temp = stacked.top();
				stacked.pop();
			}
		}
		else
		{
			while(!stacked.empty() && prec(infix[i]) <= prec(stacked.top()))
			{
				char temp = stacked.top();
				stacked.pop();
				postfix += temp;
			}
			stacked.push(infix[i]);
		}
	}

    while(!stacked.empty())
    {
        char temp = stacked.top();
        stacked.pop();
        postfix += temp;
    }

    std::cout << postfix << std::endl;

}


