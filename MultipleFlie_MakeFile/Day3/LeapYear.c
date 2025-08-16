#include "LeapYear.h"
#include "unity.h"

int isLeapYear(int yy) {   // fixed capital Y
    if (yy < 0) {
        return -1;
    }
    if (yy % 4 == 0) {
        if (yy % 100 == 0) {
            if (yy % 400 == 0) {
                return 1; // divisible by 400 -> leap year
            }
            return 0; // divisible by 100 but not 400 -> not leap year
        }
        return 1; // divisible by 4 but not 100 -> leap year
    }
    return 0; // not divisible by 4 -> not leap year
}
