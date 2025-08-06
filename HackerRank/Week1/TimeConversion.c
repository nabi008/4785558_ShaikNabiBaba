#include <stdio.h>

int main() {
    char s[10];
    int hour;
    char c1, c2;
    
    scanf("%s", s);
    hour = (s[0] - '0') * 10 + (s[1] - '0');
    c1 = s[8];
    c2 = s[9];
    if (c1=='A' && c2=='M') {
        if (hour == 12) hour = 0;
    } else if (c1=='P' && c2=='M') {
        if (hour != 12) hour += 12;
    }
    printf("%02d:%c%c:%c%c\n", hour, s[3], s[4], s[6], s[7]);
    return 0;
}
