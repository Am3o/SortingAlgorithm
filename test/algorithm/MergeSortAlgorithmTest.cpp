//
// Created by am3o on 17.12.15.
//

#include <gtest/gtest.h>

#include "../../algorithm/MergeSortAlgorithm.h"
#include "../../util/TestSuiteService.h"

#define SIZE 50

using namespace std;

TEST(MergeSortAlgorithmTest, sortEmptyListWithoutGuardian) {
    array<int, SIZE>* testArray = new array<int, SIZE>();
    array<int, SIZE> expectedArray = *testArray;

    EXPECT_EQ(expectedArray, *testArray);
}
