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

IntList::IntList() {

}

IntList::IntList(int data) :
		m_payload(new node()) {
	m_payload->data = data;
}

IntList::~IntList() {
}

void IntList::push(int data) {
	cout << "IntList::push" << endl;

	if (m_payload) {
		shared_ptr<node> pek = getLastItem();

		pek->next = shared_ptr<node>(new node());
		pek->data = data;
	} else {
		m_payload = shared_ptr<node>(new node());
		m_payload->data = data;
	}
}

int IntList::pop() {
	shared_ptr<node> pek = m_payload;
	shared_ptr<node> prev = m_payload;
	int retVal = 0;

	while (pek->next) {
		cout << pek->data << endl;
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
	cout << "IntList::getLastItem" << endl;
	shared_ptr<node> pek = m_payload;

	while (pek->next) {
		pek = pek->next;
	}

	cout << "End IntList::getLastItem" << endl;
	return pek;
}

/*
 inline std::shared_ptr<IntList::node> IntList::getItemBeforeLastItem() {
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
 */
int IntList::size() const {
	int index = 0;
	shared_ptr<node> pek = m_payload;

	while (pek) {
		cout << "pek=" << pek->data << endl;
		index++;
		pek = pek->next;
	}

	return index;
}
/*
 inline void IntList::removeItem(IntList* item) {
 delete item->m_next;
 item->m_next = 0;
 }
 */
/* namespace dast */

}

