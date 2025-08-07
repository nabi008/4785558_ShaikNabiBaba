#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int dia_a=0,dia_b=0;
    for (int i=0;i<n;i++) {
        dia_a +=arr[i][i];               
        dia_b +=arr[i][n-1-i];
    }
    printf("%d",abs(dia_a-dia_b));
    return 0;
}