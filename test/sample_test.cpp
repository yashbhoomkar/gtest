#include "../src/Example.hpp"
#include <gtest/gtest.h>
int sideEffect = 32;

bool test_function(int x)
{
    return x < 0;
}

TEST(ExampleTest, test_function_test)
{
    EXPECT_FALSE(test_function(1)) << "test_function(1) is false";
}


TEST(ExampleTest, MAC)
{
    int x = 42;
    int y = 16;
    int sum = 100;
    int expectedSum = sum + (x * y);
    int result = MAC(x, y, sum);
    EXPECT_EQ(result, expectedSum);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}






