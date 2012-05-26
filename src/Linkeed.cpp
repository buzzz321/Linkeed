//============================================================================
// Name        : Linkeed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "IntList.h"
using namespace std;
using namespace dast;

void testPush() {
	cout << "testPush()" << endl;
	IntList uat(1);

	uat.push(2);
	uat.push(3);
	uat.push(4);

	cout << uat.pop() << endl;
	cout << uat.pop() << endl;
	cout << uat.pop() << endl;
	cout << uat.pop() << endl;
	cout << uat.pop() << endl;

}

void testSubscript() {
	cout << "testSubscript()" << endl;
	IntList uat(1);

	uat.push(2);
	uat.push(3);
	uat.push(4);

	cout << uat[0] << endl;
	cout << uat[1] << endl;
	cout << uat[2] << endl;
	cout << uat[3] << endl;

}

void testSize() {
	cout << "testSize()" << endl;
	IntList uat(1);

	uat.push(2);
	uat.push(3);
	uat.push(4);

	cout << uat.size() << endl;
}

int main() {
	testPush();
	testSubscript();
	testSize();

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
