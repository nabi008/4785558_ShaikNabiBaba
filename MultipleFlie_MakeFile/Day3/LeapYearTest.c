#include "LeapYear.h"
#include <stdio.h>
#include "unity.h"
#define DISABLE_TEST

void setUp(){}
void tearDown(){}

void test_leapYear(){
    TEST_ASSERT_EQUAL(1,isLeapYear(1996));
    TEST_ASSERT_EQUAL(1,isLeapYear(2024));
}
void test_nonLeapYear(){
    //TEST_IGNORE();
    TEST_ASSERT_EQUAL(0,isLeapYear(1997));
    TEST_ASSERT_EQUAL(0,isLeapYear(1900));
    TEST_ASSERT_EQUAL(0,isLeapYear(2011));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_leapYear);
    #if !defined(DISABLE_TEST)
    RUN_TEST(test_nonLeapYear);
    #endif
    return UNITY_END();
}