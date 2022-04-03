#include "unity.h"
#include "opt.h"
#define PROJECT_NAME    "Funcalc"
void test_addn(void);
void test_subtractn(void);
void test_multiplyn(void);
void test_dividen(void);
void test_factorial(void);
void test_modulus(void);
void test_arm(void);

void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_addn);
  RUN_TEST(test_subtractn);
  RUN_TEST(test_multiplyn);
  RUN_TEST(test_dividen);
  RUN_TEST(test_factorial);
  RUN_TEST(test_modulus);
  RUN_TEST(test_arm);
  return UNITY_END();
}

void test_addn(void) {
  TEST_ASSERT_EQUAL(99, addition(1, 98));
  TEST_ASSERT_EQUAL(4, addition(2, 2));
}

void test_subtractn(void) {
  TEST_ASSERT_EQUAL(40, subtraction(80, 40));
  TEST_ASSERT_EQUAL(1, subtraction(99, 98));
}

void test_multiplyn(void) {
  TEST_ASSERT_EQUAL(6, multiplication(6, 1));
  TEST_ASSERT_EQUAL(0, multiplication(98, 0));
}

void test_dividen(void) {
  TEST_ASSERT_EQUAL(1, division(4, 4));
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

