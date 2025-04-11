
#include <gtest/gtest.h>

TEST(SampleTest, SimpleAssertion) {
    EXPECT_EQ(1 + 1, 2);
}


TEST(ExampleTest, DemonstrateGTestMacros)
{
    EXPECT_TRUE(true);
}

int main(int argc, char **argv)
{
    return RUN_ALL_TESTS();
}






