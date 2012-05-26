#include <iostream>

#include "gtest/gtest.h"
#include "src/IntList.h"
using namespace dast;
using namespace std;

TEST(IntList_size_test, empty) {
	IntList uat;

	EXPECT_EQ(1, uat.size() );
}

TEST(IntList_one_item_test, add_item) {
	IntList uat(12);

	EXPECT_EQ(1, uat.size() );
    EXPECT_EQ(12, uat.getData() );
    EXPECT_EQ(12, uat[0] );
}

