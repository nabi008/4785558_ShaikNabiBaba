//taken refference from some source on internet to solve the problem
// FlippingBits.c
#include <stdio.h>

int main() {
    int q;
    scanf("%d",&q);
    for (int i=0;i<q;i++){
        unsigned int n;
        scanf("%u", &n);
        unsigned int flipped=4294967295-n;
        printf("%u\n", flipped);
    }
    return 0;
}
