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
extern void test_safeMalloc_if_NULL_return_NULL(void);
extern void test_safeMalloc_should_throw_err__size_exceed_the_DATA_SIZE(void);
extern void test_patternCheck(void);


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
  UnityBegin("test_Smalloc.c");
  RUN_TEST(test_repeatPattern_given_x_pattern_with_1_times_should_have_x_in_the_memory, 14);
  RUN_TEST(test_repeatPattern_given_x_pattern_with_2_times_should_have_xx_in_the_memory, 22);
  RUN_TEST(test_repeatPattern_given_xy_pattern_with_2_times_should_have_xyxy_in_the_memory, 33);
  RUN_TEST(test_repeatPattern_given_xyZa_1_time_should_have_xyZa_1time_only_in_the_memory, 43);
  RUN_TEST(test_repeatPattern_given_xyZa_6_times_should_have_xyZa_5times_only_in_the_memory, 53);
  RUN_TEST(test_safeMalloc_if_NULL_return_NULL, 79);
  RUN_TEST(test_safeMalloc_should_throw_err__size_exceed_the_DATA_SIZE, 85);
  RUN_TEST(test_patternCheck, 120);

  return (UnityEnd());
}
