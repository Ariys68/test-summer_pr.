#include "pch.h"
#include "../Kxm/Kxm.c"

TEST(Test, Test1) {
  EXPECT_EQ(Search(), 1);
}

TEST(Test, Test2) {
	EXPECT_EQ(Revision(), 1);
}

TEST(Test, Test3) {
	EXPECT_EQ(Revision(), 0);
}

TEST(Test, Test4) {
	EXPECT_EQ(Revision(), 0);
}