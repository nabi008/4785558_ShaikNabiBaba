#include <stdio.h>

int main() {
    int n, k;
    int arr[1000];
    scanf("%d", &n);
    for (int i=0;i<n;i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    int min;
    for (int i=0;i<=n-k;i++) {
        int diff=arr[i+k-1]-arr[i];
        if (diff<min) min = diff;
    }
    printf("%d\n", min);
    return 0;
}
