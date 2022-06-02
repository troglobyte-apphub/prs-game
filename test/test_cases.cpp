//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"
#include <gtest/gtest.h>

//
// list of all the test cases for this project
//
TEST(testFixture, simpleAssertTrue)
{
    ASSERT_TRUE(true);
} // end of test case

TEST(testFixture, simpleAssertCompare)
{
    auto dummy = 3;
    ASSERT_EQ(3, dummy);
} // end of test case

TEST(testFixture, simpleAssertCall)
{
    ASSERT_STREQ("Hello, C++ Developer.", trog::greet());
} // end of test case

//
// The '::testing::InitGoogleTest()' function parses the command
// line for googletest flags, and removes all recognized flags.
// This allows the user to control a test program's behavior via
// various flags, which we'll cover in the AdvancedGuide. You
// must call this function before calling 'RUN_ALL_TESTS()', or
// the flags won't be properly initialized.
//
// On Windows, 'InitGoogleTest()' also works with wide strings, so
// it can be used in programs compiled in UNICODE mode as well.
//
auto main(int argc, char **argv) -> int
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
} // end of func
