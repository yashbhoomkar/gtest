
#include <gtest/gtest.h>
int sideEffect = 32;



TEST(SampleTest, SimpleAssertion) {
    EXPECT_EQ(1 + 1, 2);
}


TEST(ExampleTest, DemonstrateGTestMacros)
{
    EXPECT_TRUE(true);
}

bool test_function(int x)
{
    return x > 0;
}

TEST(ExampleTest, test_function_test)
{
    EXPECT_TRUE(test_function(1));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}






