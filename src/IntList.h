/*
 * IntList.h
 *
 *  Created on: 17 maj 2012
 *      Author: anders
 */

#ifndef INTLIST_H_
#define INTLIST_H_

namespace dast {

class IntList {
public:
	IntList();
	IntList(int data);
	virtual ~IntList();

	const int& operator[](int idx) const;
	int size() const;

	void push(int data);
	int pop();

	int getData() const {
		return m_data;
	}

	void setData(int data) {
		m_data = data;
	}
private:
	IntList * getLastItem();
	IntList * getItemBeforeLastItem();
	void removeItem(IntList *item);

	int m_data;
	IntList *m_next;
};

} /* namespace dast */
#endif /* INTLIST_H_ */
