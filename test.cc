#include <iostream>

#include "gtest/gtest.h"
#include "src/IntList.h"
using namespace dast;
using namespace std;

TEST(IntList_size_test, empty) {
	IntList uat(12);

	cout<<uat.size()<<endl;
	EXPECT_EQ(0, uat.size() );
}
