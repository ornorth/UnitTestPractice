/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

//REPEATS
TEST(PracticeTest, zzz_repeats)
{
	Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("zzz"), 3);
}

TEST(PracticeTest, repeat_is_case_sensitive)
{
	Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("zZz"), 1);
}

TEST(PracticeTest, repeat_handles_char)
{
	Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("z"), 1);
}

TEST(PracticeTest, repeat_handles_empty_string)
{
	Practice obj;
	ASSERT_EQ(obj.count_starting_repeats(""), 0);
}

TEST(PracticeTest, repeat_uses_first_char)
{
	Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("azzz"), 1);
}

//PALINDROME
TEST(PracticeTest, pal_abba)
{
	Practice obj;
	ASSERT_TRUE(obj.isPalindrome("abba"));
}

TEST(PracticeTest, pal_tacocat)
{
	Practice obj;
	ASSERT_TRUE(obj.isPalindrome("tacocat"));
}

TEST(PracticeTest, pal_abcde)
{
	Practice obj;
	ASSERT_FALSE(obj.isPalindrome("abcde"));
}

TEST(PracticeTest, pal_abcd)
{
	Practice obj;
	ASSERT_FALSE(obj.isPalindrome("abcd"));
}

TEST(PracticeTest, pal_a)
{
	Practice obj;
	ASSERT_TRUE(obj.isPalindrome("a"));
}

//not sure whether we want this to return true or false on an empty string
//I will assume false, since [NULL] isn't exactly a palindrome?
TEST(PracticeTest, pal_empty)
{
	Practice obj;
	ASSERT_FALSE(obj.isPalindrome(""));
}

TEST(PracticeTest, pal_is_case_insensitive)
{
	Practice obj;
	ASSERT_TRUE(obj.isPalindrome("TaCocAt"));
}

TEST(PracticeTest, pal_handles_non_a_to_z)
{
	Practice obj;
	ASSERT_FALSE(obj.isPalindrome("[aba;"));
}

//SORT_DESCENDING
TEST(PracticeTest, sort_123)
{
	Practice obj;
	int a = 1;
	int b = 2;
	int c = 3;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_132)
{
	Practice obj;
	int a = 1;
	int b = 3;
	int c = 2;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_213)
{
	Practice obj;
	int a = 2;
	int b = 1;
	int c = 3;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_231)
{
	Practice obj;
	int a = 2;
	int b = 3;
	int c = 1;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_312)
{
	Practice obj;
	int a = 3;
	int b = 1;
	int c = 2;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_321)
{
	Practice obj;
	int a = 3;
	int b = 2;
	int c = 1;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_122)
{
	Practice obj;
	int a = 1;
	int b = 2;
	int c = 2;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 2);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_221)
{
	Practice obj;
	int a = 2;
	int b = 2;
	int c = 1;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 2);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_112)
{
	Practice obj;
	int a = 1;
	int b = 1;
	int c = 2;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 2);
	ASSERT_EQ(b, 1);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_211)
{
	Practice obj;
	int a = 2;
	int b = 1;
	int c = 1;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 2);
	ASSERT_EQ(b, 1);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sort_111)
{
	Practice obj;
	int a = 1;
	int b = 1;
	int c = 1;
	obj.sortDescending(a, b, c);
	ASSERT_EQ(a, 1);
	ASSERT_EQ(b, 1);
	ASSERT_EQ(c, 1);
}

