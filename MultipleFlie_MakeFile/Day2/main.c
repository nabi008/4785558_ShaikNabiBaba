#include <stdio.h>
#include "Header.h"
#include "unity.h"

void setUp(void) {}
void tearDown(void) {}

void test_sum(){
    TEST_ASSERT_EQUAL(5,(sum(2,3)));
    TEST_ASSERT_EQUAL(0,(sum(0,0)));
    TEST_ASSERT_EQUAL_INT(-5,(sum(-2,-3)));
    TEST_ASSERT_EQUAL(10,(sum(7,3)));
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    return UNITY_END();
}