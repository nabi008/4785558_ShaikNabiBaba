#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int res[100]={0};
    for (int i=0;i<n;i++) {
        int x;
        scanf("%d",&x);
        if (x>=0 && x<100) {
            res[x]++;
        }
    }
    for (int i=0;i<100;i++) {
        printf("%d ",res[i]);
    }
    return 0;
}
