#include "TestHarness.h"
#include "../factorial.h"

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(factorial_template, factorial)
{
  Factorial<int> my_fact;
  CHECK_EQUAL(6,my_fact.fact(3))
}