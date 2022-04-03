#include "unity.h"
#include "opt.h"
#define PROJECT_NAME    "arm_cal"
void test_addn(void);
void test_subtractn(void);
void test_multiplyn(void);
void test_dividen(void);
void test_factorial(void);
void test_modulus(void);
void test_arm(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addn);
  RUN_TEST(test_subtractn);
  RUN_TEST(test_multiplyn);
  RUN_TEST(test_dividen);
  RUN_TEST(test_factorial);
  RUN_TEST(test_modulus);
  RUN_TEST(test_arm);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_addn(void) {
  TEST_ASSERT_EQUAL(99, addition(1, 98));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4, addition(2, 2));
}

void test_subtractn(void) {
  TEST_ASSERT_EQUAL(40, subtraction(80, 40));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, subtraction(99, 98));
}

void test_multiplyn(void) {
  TEST_ASSERT_EQUAL(6, multiplication(6, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, multiplication(98, 0));
}

void test_dividen(void) {
  TEST_ASSERT_EQUAL(1, division(4, 4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, division(8, 4));
}
void test_factorial(void){
  TEST_ASSERT_EQUAL(120,factorial(5));
  TEST_ASSERT_EQUAL(24,factorial(4));
}
void test_modulus(void){
  TEST_ASSERT_EQUAL(1,modulus(3,2));
  TEST_ASSERT_EQUAL(0,modulus(4,2));
}
void test_arm(void){
  TEST_ASSERT_EQUAL("Armstrong",modulus(371));
  TEST_ASSERT_EQUAL("Not armstrong",modulus(1000));
}

