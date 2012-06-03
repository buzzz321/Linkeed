#include <iostream>

#include "gtest/gtest.h"
#include "src/IntList.h"
using namespace dast;
using namespace std;

TEST(IntList_size_test, empty) {
  IntList uat;

  EXPECT_EQ(0, uat.size() );
}

TEST(IntList_one_item_test, add_item) {
  IntList uat(12);

  EXPECT_EQ(1, uat.size() );
  EXPECT_EQ(12, uat.pop() );
}

TEST(IntList_add_ten_items, add_item) {
  IntList uat;
  cout << "---->IntList_add_ten_items "<<endl;
  for ( int i = 0; i < 10; i++ ) {
    uat.push(i);
  }
  cout << "klar "<<endl;
  EXPECT_EQ(10, uat.size() );
  //EXPECT_EQ(0, uat.getData() );
  //EXPECT_EQ(9, uat[9] );

}

