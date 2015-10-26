/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
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
#include "config.h"
#include "ntp_types.h"
#include "ntp_stdlib.h"
#include "lfptest.h"
#include "ntp_unixtime.h"
#include <math.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_ZeroBuffer(void);
extern void test_IntegerAndFractionalBuffer(void);
extern void test_IllegalMicroseconds(void);
extern void test_AlwaysFalseOnWindows(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}

char const *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  UnityBegin("buftvtots.c");
  RUN_TEST(test_ZeroBuffer, 14);
  RUN_TEST(test_IntegerAndFractionalBuffer, 15);
  RUN_TEST(test_IllegalMicroseconds, 16);
  RUN_TEST(test_AlwaysFalseOnWindows, 17);

  return (UnityEnd());
}
