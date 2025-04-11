
#include <gtest/gtest.h>

TEST(SampleTest, SimpleAssertion) {
    EXPECT_EQ(1 + 1, 2);
}

TEST(SampleTest, AnotherAssertion)
{
    ASSERT_EQ(10, 11);
}

int main(int argc, char **argv)
{
    return RUN_ALL_TESTS();
}






