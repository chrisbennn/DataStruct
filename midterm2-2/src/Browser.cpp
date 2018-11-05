/*
 * Browser.cpp
 *
 *  Created on: Nov 1, 2018
 *      Author: Lucy
 */

#include "Browser.h"
#include <iostream>

//	BrowserTab tabs[32]; //Temporarily created a static array of maximum of 32 tabs
//	unsigned int current_tab_index; // Index of the current tab
//	unsigned int num_tabs; // Number of open tabs
	Browser::Browser()
	{
		num_tabs = 0;
		current_tab_index = 0;
	}
	void Browser::switchToTab(unsigned int) 	// Switch to tab with index specified
	{

	}
	// ^ Needs to check if the index is valid
	void Browser::openTab(BrowserTab) 			// Open a new tab
	{
		num_tabs++;
		current_tab_index = num_tabs; //opens on the new tab
	}
	void Browser::closeCurrentTab()				// Closes the current tab
	{
		tabs[current_tab_index].~BrowserTab();
	}
	unsigned int Browser::getCurrentTabIndex()  // Returns the index of the current tab
	{
		return current_tab_index;
	}
	unsigned int Browser::getNumTabs()			// Returns the number of open tabs
	{
		return num_tabs;
	}
	BrowserTab* Browser::getCurrentTab()			// Returns the current BrowserTab object
	{

		return &tabs[num_tabs];
	}
	Browser::~Browser()
	{

	}
