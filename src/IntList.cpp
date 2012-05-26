/*
 * IntList.cpp
 *
 *  Created on: 17 maj 2012
 *      Author: anders
 */

#include "IntList.h"
#include <iostream>
using namespace std;

namespace dast {

IntList::IntList() :
		m_data(0), m_next(0) {
	// TODO Auto-generated constructor stub

}

IntList::IntList(int data) :
		m_data(data), m_next(0) {
	// TODO Auto-generated constructor stub

}

IntList::~IntList() {
	// TODO Auto-generated destructor stub
	delete m_next;
}

void IntList::push(int data) {
	IntList *pek = getLastItem();
	pek->m_next = new IntList(data);
}

int IntList::pop() {
	int retVal = 0;
	if (m_next == 0) {
		retVal = m_data;
	} else {
		IntList *pek = getItemBeforeLastItem();

		retVal = pek->m_next->m_data;
		removeItem(pek);
	}
	return retVal;
}

inline IntList* IntList::getLastItem() {
	IntList *pek = this;

	while (pek->m_next != 0) {
		pek = pek->m_next;
	}
	return pek;
}

inline IntList* IntList::getItemBeforeLastItem() {
	IntList *pek = this;

	while (pek->m_next->m_next != 0) {
		//cout << "pek=" << pek << endl;
		pek = pek->m_next;
	}

	return pek;
}

const int& IntList::operator [](int idx) const {
	int index = 0;
	const IntList *pek = this;

	while (pek->m_next != 0 && index < idx) {
		pek = pek->m_next;
		index++;
	}

	return pek->m_data;
}

int IntList::size() const {
	int index = 1;
	const IntList *pek = this;

	while (pek->m_next != 0) {
		pek = pek->m_next;
		index++;
	}
	return index;
}

inline void IntList::removeItem(IntList* item) {
	delete item->m_next;
	item->m_next = 0;
}
/* namespace dast */

}

