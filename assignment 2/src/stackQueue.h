/*
 * stackQueue.h
 *
 *  Created on: Oct 23, 2018
 *      Author: Lucy
 */

#ifndef STACKQUEUE_H_
#define STACKQUEUE_H_

#include <iostream>
#include <stack>
#include <exception>



template <class elemType>
class stackQueue {
private:

	std::stack<elemType> stacked, sloshed;


public:

	/*
	 * a simple push to the back of the queue aka the top in stack terms,
	 */
	void enqueue (elemType element)
	{
		stacked.push(element);
	}
	/*
	 * return dequeued - removes the element of the queue and returns the value
	 * by sloshing the first element to the back of the queue and remving and then returning it back
	 */
	elemType dequeue ()
	{

		while(!stacked.empty())
		{
			sloshed.push(stacked.top());
			stacked.pop();
		}
		elemType dequeued = sloshed.top();
		sloshed.pop();
		while(!sloshed.empty())
		{
			stacked.push(sloshed.top());
			sloshed.pop();

		}
		return dequeued;
	}

	/*
	 * @return front - the front of the queue buy sloshing the stack to the front
	 */
	elemType front ()
	{
		while(!stacked.empty())
		{
			sloshed.push(stacked.top());
			stacked.pop();
		}
		elemType front = sloshed.top();
		while(!sloshed.empty())
		{
			stacked.push(sloshed.top());
			sloshed.pop();

		}
		return front;
	}
	int size ()
	{
		return stacked.size();			//using stl stack library return the size of the queue
	}

	bool isEmpty ()
	{
		return stacked.empty(); 		//using the stl library of stack to check if its empty
	}
	bool isFull ()
	{
		try
		{
			elemType n;

			stacked.push(n);
			if(stacked.top() == n)		//only return true when the capacity of which it's contained is filled
			{
				stacked.pop();
				return false;
			}
			return true;
		}
		catch(...)
		{
			std::cout << std::endl << "The queue is full" << std::endl;
		}
		return false;
	}

};


#endif /* STACKQUEUE_H_ */
