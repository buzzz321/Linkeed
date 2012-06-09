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

IntList::IntList(): m_payload(0) {

}

IntList::IntList(int data) :
		m_payload(new node()) {
	m_payload->data = data;
}

IntList::~IntList() {
}

void IntList::push(int data) {
		shared_ptr<node> pek = getLastItem();

		pek->next = shared_ptr<node>(new node());
		pek->next->data = data;
}

int IntList::pop() {
	shared_ptr<node> pek = m_payload;
	shared_ptr<node> prev = m_payload;
	int retVal = 0;

	while (pek->next) {
		prev = pek;
		pek = pek->next;
	}

	if (pek) {
		retVal = pek->data;
		prev->next = shared_ptr<node>();
	}
	return retVal;
}

inline shared_ptr<IntList::node> IntList::getLastItem() {
	shared_ptr<node> pek = m_payload;
	shared_ptr<node> prev = m_payload;

	while (pek) {
	  prev = pek;
	  pek = pek->next;
	}

	return prev;
}

const int& IntList::operator [](int idx) const {
	int index = 0;
	shared_ptr<node> pek = m_payload;

	while (index < idx) {
		pek = pek->next;
		index++;
	}

	return pek->data;
}

int IntList::size() const {
	int index = 0;
	shared_ptr<node> pek = m_payload;

	while (pek) {
		index++;
		pek = pek->next;
	}

	return index;
}

 inline void IntList::removeItem(int index) {

 }

/* namespace dast */

}

