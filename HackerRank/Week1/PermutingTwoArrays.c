#include <stdio.h>

void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i=0;i<n-1;i++) {
        for (j=0;j<n-1-i;j++) {
            if (arr[j]>arr[j + 1]) {
                temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
}
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i=0;i<n-1;i++) {
        for (j=0;j<n-1-i;j++) {
            if (arr[j]<arr[j + 1]) {
                temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--){
        int n, k;
        scanf("%d %d", &n, &k);
        int A[100], B[100];
        int i;
        for (i=0;i<n;i++) scanf("%d", &A[i]);
        for (i=0;i<n;i++) scanf("%d", &B[i]);
        sortAscending(A,n);
        sortDescending(B,n);
        int possible=1;
        for (i=0;i<n;i++) {
            if (A[i]+B[i]<k) {
                possible=0;
                break;
            }
        }
        if (possible==1) printf("YES");
        else printf("NO");
    }
    return 0;
}
