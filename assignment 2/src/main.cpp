//============================================================================
// Name        : assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "stackQueue.h"

using namespace std;

int main()
{
	try
	{

		stackQueue<char> charQueue;
		if(!charQueue.isEmpty())
		{
			cout << "this shit not empty" << endl;
		}
		else if (charQueue.isEmpty())
		{
			cout << "this shit is  empty" << endl;
		}

		if(!charQueue.isFull())
		{
			cout << "this shit not full" << endl;
		}
		else if (charQueue.isFull())
		{
			cout << "this shit is full" << endl;
		}
		charQueue.enqueue('A');
		charQueue.enqueue('B');
		cout << charQueue.dequeue() << endl;
		charQueue.enqueue('C');
		cout << charQueue.dequeue() << endl;
		charQueue.enqueue('D');
		cout << "the front is: " <<charQueue.front() << endl;
		cout << "the size is: " <<charQueue.size() << endl;

		if(!charQueue.isFull())
		{
			cout << "this shit not full" << endl;
		}
		else if (charQueue.isFull())
		{
			cout << "this shit is full" << endl;
		}
		cout << charQueue.dequeue() << endl;
		cout << charQueue.dequeue() << endl;
		cout << charQueue.dequeue() << endl;
	}
	catch (const char *e)
	{
		cout << e << endl;
	}
	return 0;
}
