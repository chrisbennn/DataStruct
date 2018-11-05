//============================================================================
// Name        : lab3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "arrayList.h"
using namespace std;

int main() {
	arrayList<int> c;
	cout << "The arrayList.h header testing with integers." << endl << endl;
	cout << endl; c.print(); cout << endl;
	if(c.isEmpty())
	{
		cout << endl << "array List is empty" << endl;
	}
	else
	{
		cout << "array List is not empty" << endl;
	}

	if(c.isFull() == true)
	{
		cout << "array List is Full" << endl;
	}
	else if(!c.isFull())
	{
		cout << "array List is not Full" << endl;
	}

	cout << "the list size is " << c.listSize() << endl;
	cout << "the max list size is " << c.maxListSize() << endl;

	c.print();
	cout << endl;
	if(c.isItemAtEqual(5, 10))
	{
		cout << "Item is equal" << endl;
	}
	else
	{
		cout << "Item is not equal" << endl;
	}

	c.insertAt(2,2);
	c.print(); cout << ": insertAt";
	cout << endl;
	c.insertAt(2,3);
	c.print(); cout << ": insertAt";
	cout << endl;
	c.insertEnd(2);
	c.print();cout << ": insertEnd";
	cout << endl;
	c.removeAt(2);
	c.print();cout << ": RemoveAt";
	cout << endl;
	cout << c.retreiveAt(3); cout << ": retreiveAt";
	cout << endl;
	c.replaceAt(4,6);
	c.print();cout << ": replaceAt";
	cout << endl;

	c.replaceAt(0,6);	c.replaceAt(1,6);	c.replaceAt(2,6);	c.replaceAt(3,6);	c.replaceAt(4,6);
	c.replaceAt(5,6);	c.replaceAt(6,6);	c.replaceAt(7,6);
	if(c.isEmpty())
	{
		cout << endl << "array List is empty" << endl;
	}
	else
	{
		cout << "array List is not empty" << endl;
	}

	if(c.isFull() == true)
	{
		cout << "array List is Full" << endl;
	}
	else if(!c.isFull())
	{
		cout << "array List is not Full" << endl;
	}
	c.print(); cout << endl;
	c.replaceAt(0,8);	c.replaceAt(1,5);	c.replaceAt(2,5);	c.replaceAt(3,5);	c.replaceAt(4,3);
	c.replaceAt(5,6);	c.replaceAt(6,8);	c.replaceAt(7,8);	c.replaceAt(8,8);	c.replaceAt(9,1);
	if(c.isEmpty())
	{
		cout << endl << "array List is empty" << endl;
	}
	else
	{
		cout << "array List is not empty" << endl;
	}

	if(c.isFull() == true)
	{
		cout << "array List is Full" << endl;
	}
	else if(!c.isFull())
	{
		cout << "array List is not Full" << endl;
	}
	c.print(); cout << endl;
	cout << endl << endl << "this is the min: " << c.getMin() << endl << endl << endl;
	c.clearList();
	c.print();cout << ": clear list";
	cout << endl;

	c.~arrayList(); //why do i get this error: lab3(9405,0x7fff910eb340) malloc: *** error for object 0x7fea90402690: pointer being freed was not allocated
	//*** set a breakpoint in malloc_error_break to debug

	return 0;
}
