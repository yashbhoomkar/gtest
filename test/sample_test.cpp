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


TEST(ExampleTest , asser_test)
{
    ASSERT_EQ(1, 1); // FATAL ERROR equal
    EXPECT_EQ(1, 1);   // equal
    EXPECT_NE(1, 2); // not equal
    EXPECT_STREQ("hello", "hello"); // string equal
    EXPECT_STRNE("hello", "world"); // string not equal
    EXPECT_LT(1, 2); // less than
    EXPECT_LE(1, 1); // less than or equal
}





int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}






