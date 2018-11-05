/*
 * arrayStack.h
 *
 *  Created on: Oct 9, 2018
 *      Author: Lucy
 */

#ifndef ARRAYSTACK_H_
#define ARRAYSTACK_H_

#include <iostream>
#include <stack>

template <class  arrayStack>
class myStack
{
private:

	struct stackNode
	{
		arrayStack data = NULL;
		stackNode *next = NULL;
	};
	stackNode *stackTop;


public:

	~myStack()
	{
		while(!empty())
		{
			pop();
		}
	}

	arrayStack pop()
	{
	    if ( !empty() ) {
	        stackNode *temp = stackTop;
	        stackTop = stackTop->next;
	        arrayStack data = temp->data;
	        delete temp;
	        return data;
	    }
	    return stackTop->data;
	}
	void push(arrayStack n)
	{
		if(stackTop->next == NULL)
		{
			stackTop->data = n;
		}
		else
		{
			stackNode *New;
			New->data = n;
			New->next = stackTop;
			stackTop = New;
		}
	}
	void top()
	{
		std::cout << "The Current top is data " << stackTop->data << std::endl;
	}
	int size()
	{
		int size = 0;
		stackNode *temp = stackTop;
		while(temp->next != NULL)
		{
			if(temp->data != 0)
			{
				size++;
			}
		}
		return size;
	}
	int maxSize()
	{
		int size = 0;
		stackNode *temp = stackTop;
		while(temp->next != NULL)
		{
			size++;
		}
		return size;
	}
	bool empty()
	{
		if(stackTop->next == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}



};




#endif /* ARRAYSTACK_H_ */
