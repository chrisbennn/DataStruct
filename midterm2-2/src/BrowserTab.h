#ifndef BROWSERTAB_H_
#define BROWSERTAB_H_

#include <string>
#include <stack>
using namespace std;

class BrowserTab {
public:
	BrowserTab();
	void visitPage(string);
	void back();
	void forward();
	string getCurrentPage();
	void printHistory();
	~BrowserTab();
private:
	string current_page;
	/*****************
	 * Add any fields you need
	 *****************/
	stack<string> backStack;
	stack<string> forwardStack;
	string history[100];
	int histSize;
};

#endif /* BROWSERTAB_H_ */
