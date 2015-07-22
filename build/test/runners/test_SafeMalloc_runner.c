/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_repeatPattern_given_x_pattern_with_1_times_should_have_x_in_the_memory(void);
extern void test_repeatPattern_given_x_pattern_with_2_times_should_have_xx_in_the_memory(void);
extern void test_repeatPattern_given_xy_pattern_with_2_times_should_have_xyxy_in_the_memory(void);
extern void test_repeatPattern_given_xyZa_1_time_should_have_xyZa_1time_only_in_the_memory(void);
extern void test_repeatPattern_given_xyZa_6_times_should_have_xyZa_5times_only_in_the_memory(void);
extern void test_createAllocationPool_given_head_and_tail_both_return_NULL(void);
extern void test_createMemoryDescription_given_next_and_memory_both_return_NULL(void);
extern void test_linkedList_given_one_memory_description_should_return_one_memory_description(void);
extern void test_linkedList_given_two_memory_description_should_return_two_memory_description(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_SafeMalloc.c");
  RUN_TEST(test_repeatPattern_given_x_pattern_with_1_times_should_have_x_in_the_memory, 15);
  RUN_TEST(test_repeatPattern_given_x_pattern_with_2_times_should_have_xx_in_the_memory, 21);
  RUN_TEST(test_repeatPattern_given_xy_pattern_with_2_times_should_have_xyxy_in_the_memory, 30);
  RUN_TEST(test_repeatPattern_given_xyZa_1_time_should_have_xyZa_1time_only_in_the_memory, 39);
  RUN_TEST(test_repeatPattern_given_xyZa_6_times_should_have_xyZa_5times_only_in_the_memory, 48);
  RUN_TEST(test_createAllocationPool_given_head_and_tail_both_return_NULL, 79);
  RUN_TEST(test_createMemoryDescription_given_next_and_memory_both_return_NULL, 91);
  RUN_TEST(test_linkedList_given_one_memory_description_should_return_one_memory_description, 112);
  RUN_TEST(test_linkedList_given_two_memory_description_should_return_two_memory_description, 138);

  return (UnityEnd());
}
