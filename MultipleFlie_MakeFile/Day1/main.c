#include <stdio.h>
#include "Demo.h"
#include "unity.h"
void setUp(void) {
    // Set up code if needed
}
void tearDown(void) {
    // Tear down code if needed
}
void test_sum(void) {
    TEST_ASSERT_EQUAL(15, sum(10, 5));
}
void test_multiply(void) {
    TEST_ASSERT_EQUAL(50, multiply(10, 5));
}
void test_subtract(void) {
    TEST_ASSERT_EQUAL(5, subtract(10, 5));
}
void test_divide(void) {
    TEST_ASSERT_EQUAL(2, divide(10, 5));
}
void test_square(void) {
    TEST_ASSERT_EQUAL(100, square(10));
}
int main() {
    int a = 10, b = 5;

    printf("Sum: %d\n", sum(a, b));
    printf("Multiply: %d\n", multiply(a, b));
    printf("Subtract: %d\n", subtract(a, b));
    printf("Divide: %d\n", divide(a, b));
    printf("Square of %d: %d\n", a, square(a));

    UNITY_BEGIN();
    RUN_TEST(test_sum);
    RUN_TEST(test_multiply);
    RUN_TEST(test_subtract);
    RUN_TEST(test_divide);
    RUN_TEST(test_square);
    return UNITY_END();
    
}