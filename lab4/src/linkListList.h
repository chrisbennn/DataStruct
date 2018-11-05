/*
 * linkListList.h
 *
 *  Created on: Sep 19, 2018
 *      Author: Lucy
 */

#ifndef LINKLISTLIST_H_
#define LINKLISTLIST_H_

#include <iostream>
using namespace std;

template <class elemType>
struct node
{
	elemType data;
	node<elemType> *next;
	//node<elemType> *prev;
};

template <class elemType>
class linkListList {

private:
	node<elemType> *head;
	node<elemType> *tail;

public:


	linkListList()
	{
		head = NULL;
		tail = NULL;
	}
	~linkListList()
	{
		delete head, tail;
	}
	bool isEmpty() const
	{
		bool isEmpty = false;
		if(head == NULL){
			isEmpty = true;
		}
		return isEmpty;
	}
	bool isFull() const
	{
		node<elemType> *tmp;
		tmp = head;
		bool isFull = true;
		while(tmp != NULL && !isEmpty())
		{
			if(tmp->data == NULL)
			{
				isFull = false;
			}
			tmp = tmp->next;
		}
		return isFull;
	}
	int listSize() const
	{
		node<elemType> *tmp;
		tmp = head;
		int count = 0;
		while(tmp != NULL && !isEmpty())
		{
			if(tmp->data != NULL)
			{
				count++;
			}
			tmp = tmp->next;
		}
		return count;
	}
	int maxListSize() const
	{
		node<elemType> *tmp;
		tmp = head;
		int count = 0;
		while(tmp != NULL && !isEmpty())
		{
			count++;
			tmp = tmp->next;
		}
		return count;
	}
	void print()
	{
		node<elemType> *tmp;
		tmp = head;
		cout << " (print) Data of Link List: ";
		while(tmp != NULL && !isEmpty())
		{
			cout << tmp->data << " " << endl;
			tmp = tmp->next;
		}
		if(isEmpty())
		{
			cout << "There is no data to print out." << endl;
		}
	}
	bool isItemAtEqual(int, elemType)
	{
		node<elemType> *tmp;
		tmp = head;
		int count = 0;
		bool isItemAtEqual = false;
		if(isEmpty())
		{
			cout << "(isItemAtEqual) Link List is empty: " << endl;
		}
		else
		{
			while(tmp != NULL && !isEmpty())
			{
				if(count == this )
				{
					if(this == tmp -> data)
					{
						isItemAtEqual = true;
					}
				}
				tmp = tmp->next;
				count++;
			}
		}
		return isItemAtEqual;
	}
	void insertAt(int, elemType)
	{
		node<elemType> *tmp;
		node<elemType> *tmpTwo = new node<elemType>;
		tmp = head;
		int count = 0;
		while(tmp != NULL && !isEmpty())
		{
			if(count == this)
			{
				if(tmp->next ==NULL)
				{
					tmp->next = tmpTwo;
					tmpTwo->next = NULL;
				}
				else
				{
					tmpTwo->next = tmp->next;
					tmp->next = tmpTwo;
				}
			}
			count++;
			tmp = tmp->next;
		}
	}
	void insertEnd(elemType)
	{
		node<elemType> *tmpTwo = new node<elemType>;
		if(tail == NULL)
		{
			tmpTwo->next = tail;
			tail = tmpTwo;
			head = tmpTwo;
		}
		tail->next = tmpTwo;
		tail = tail->next;

	}
	void removeAt(int)
	{
		node<elemType> *tmp;
		node<elemType> *tmpTwo = new node<elemType>;
		tmp = head;
		int count = 0;
		if(this == 0)
		{
			while(tmp != NULL && !isEmpty())
			{
				if(count == this )
				{
					break;
				}
				count++;
				tmp = tmp->next;
			}
			node<elemType> *tmpTwo = new node<elemType>;
			tmp->data = tmp->next->data;
			tmpTwo = tmp->next;
		}
		else
		{
			while(tmp != NULL && !isEmpty())
			{
				if(count == this )
				{
					break;
				}
				count++;
				tmp = tmp->next;
			}
			tmpTwo = tmp;

			tmp->next = tmp->next->next;
		}
	}
	elemType retreiveAt(int)
	{
		node<elemType> *tmp;
		node<elemType> *tmpTwo = new node<elemType>;
		tmp = head;
		int count = 0;
		while(tmp != NULL && !isEmpty())
		{
			if(count == this )
			{
				break;
			}
			count++;
			tmp = tmp->next;
		}

	}
	void replaceAt(int, elemType)
	{

	}
	void clearList()
	{

	}
	linkListList operator = ( const linkListList& a){    // why were we told to over load this? for practice?
		return linkListList();
	}

};

#endif /* LINKLISTLIST_H_ */
