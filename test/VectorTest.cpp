//
// Created by kprlns on 19.10.2020.
//

#include <gtest/gtest.h>
#include "Vector.hpp"

TEST(TestAdd, testAddWithoutResize) {
    // given: vector with capacity 10
    Vector<int> vector(10);

    //when: we adding 3 elements
    vector.add(1);
    vector.add(2);
    vector.add(5);

    //then: vector should contain exactly same elements and capacity should not be increased
    EXPECT_EQ(1, vector[0]);
    EXPECT_EQ(2, vector[1]);
    EXPECT_EQ(5, vector[2]);
    EXPECT_EQ(3, vector.getSize());
    EXPECT_EQ(10, vector.getCapacity());
}


TEST(TestAdd, testAddWithResize) {
    // given: vector with capacity 2
    Vector<int> vector(2);

    //when: we adding 4 elements
    vector.add(1);
    vector.add(2);
    vector.add(5);
    vector.add(2);

    //then: vector should contain exactly same elements and capacity should be increased
    EXPECT_EQ(1, vector[0]);
    EXPECT_EQ(2, vector[1]);
    EXPECT_EQ(5, vector[2]);
    EXPECT_EQ(2, vector[3]);
    EXPECT_EQ(4, vector.getSize());
    EXPECT_EQ(6, vector.getCapacity());
}