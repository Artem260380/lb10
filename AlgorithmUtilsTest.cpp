#include "gtest/gtest.h"
#include "AlgorithmUtils.h"
#include <vector>

TEST(AlgorithmUtilsTest, FindMinPositivePositiveCase) {
    std::vector<int> array = {10, -5, 3, 0, 8, 1};
    EXPECT_EQ(AlgorithmUtils::findMinPositive(array), 1);
}

TEST(AlgorithmUtilsTest, FindMinPositiveNegativeCase) {
    std::vector<int> array = {-10, -5, 0};
    EXPECT_EQ(AlgorithmUtils::findMinPositive(array), -1);
}

TEST(AlgorithmUtilsTest, SumNegativesPositiveCase) {
    std::vector<int> array = {-5, -20, 0, -10};
    EXPECT_EQ(AlgorithmUtils::sumNegativesOnly(array), -35);
}

TEST(AlgorithmUtilsTest, SumNegativesNegativeCase) {
    std::vector<int> array = {-5, 3, -20};
    EXPECT_EQ(AlgorithmUtils::sumNegativesOnly(array), 1);
}

TEST(AlgorithmUtilsTest, GetFibonacciPositiveCase) {
    EXPECT_EQ(AlgorithmUtils::getFibonacci(10), 55);
}

TEST(AlgorithmUtilsTest, GetFibonacciNegativeCase) {
    EXPECT_EQ(AlgorithmUtils::getFibonacci(-1), -1);
}

TEST(AlgorithmUtilsTest, CalculateCurrentPositiveCase) {
    EXPECT_DOUBLE_EQ(AlgorithmUtils::calculateCurrent(12.0, 4.0), 3.0);
}

TEST(AlgorithmUtilsTest, CalculateCurrentNegativeCase) {
    EXPECT_DOUBLE_EQ(AlgorithmUtils::calculateCurrent(12.0, 0.0), -1.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}