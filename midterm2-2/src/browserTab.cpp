/*
 * browserTab.cpp
 *
 *  Created on: Nov 1, 2018
 *      Author: Lucy
 */

#include"browserTab.h"
#include <iostream>

//	string current_page;
//
//	//decl extra here
//
//	stack<string> backStack;
//	stack<string> forwardStack;
//	string history[100];
//	int histSize;

	BrowserTab::BrowserTab()
	{
		histSize = 0;
	}
	void BrowserTab::visitPage(string n)
	{
		backStack.push(current_page);
		while(!forwardStack.empty())
		{
			forwardStack.pop();
		}

		current_page = n;
		history[histSize];
		histSize++;


	}
	void BrowserTab::back()
	{
		if(!backStack.empty())
		{
			forwardStack.push(current_page);
			current_page = backStack.top();
			backStack.pop();
		}
		else if(backStack.empty())
		{
			std::cout << "Cant go back" << std::endl;
		}
	}

	void BrowserTab::forward()
	{
		if(!forwardStack.empty())
		{
			backStack.push(current_page);
			current_page = forwardStack.top();
			forwardStack.pop();
		}
		else if(forwardStack.empty())
		{
			std::cout << "Cant go forward" << std::endl;
		}
	}
	string BrowserTab::getCurrentPage()
	{
		return current_page;
	}
	void BrowserTab::printHistory()
	{
		for(int i = 0; i < histSize; i++)
		{
			cout <<	history[i];

		}
	}
	BrowserTab::~BrowserTab()
	{

	}
