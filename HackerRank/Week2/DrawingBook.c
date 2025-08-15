#include <stdio.h>
int pageCount(int n, int p) {
    int fr=p/2;
    int b=(n/2)-(p/2);
    return fr<b ? fr:b;
}
int main() {
    int n,p;
    scanf("%d%d", &n, &p);
    printf("%d\n",pageCount(n,p));
    return 0;
}
