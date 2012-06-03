/*
 * IntList.h
 *
 *  Created on: 17 maj 2012
 *      Author: anders
 */

#ifndef INTLIST_H_
#define INTLIST_H_

#include <memory>

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

private:
	struct node {
		int data;
		std::shared_ptr<node> next;
	};

	std::shared_ptr<node> m_payload;

	std::shared_ptr<IntList::node> getLastItem();
	void removeItem(int index);
};

} /* namespace dast */
#endif /* INTLIST_H_ */
