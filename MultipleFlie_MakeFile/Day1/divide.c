#include "Demo.h"
int divide(int a, int b) {
    if (b == 0) {
        // Handle division by zero error
        return 0; // or some error code
    }
    return a / b;
}