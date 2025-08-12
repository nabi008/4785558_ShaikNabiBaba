#include <stdio.h>
int main() {
    char a[1001], b[1001], result[1001];
    int i;
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == b[i]) result[i] = '0';
        else result[i] = '1';
    }
    result[i] = '\0';
    printf("%s", result);
    return 0;
}
