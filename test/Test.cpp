//
// Created by kprlns on 15.10.2020.
//

#include "gtest/gtest.h"
#include "TestClass.hpp"

TEST(TestSign, testZero) {
    EXPECT_EQ(0, TestClass().sign(0));
}

TEST(TestSign, testPositive) {
    EXPECT_EQ(1, TestClass().sign(5));
}