#include <stdio.h>

void plusMinus(int arr_count, int arr[]) {
    
    float sum1,sum2,sum3;
    scanf("%d",&arr_count);
    for(int i=0;i<arr_count;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<arr_count;i++){
        if(arr[i]>0) sum1++;
        else if(arr[i]<0) sum2++;
        else sum3++;
    }
    printf("%f\n",sum1/arr_count);
    printf("%f\n",sum2/arr_count);
    printf("%f\n",sum3/arr_count);

}
int main()
{
    int n;
    int arr[1000];
    plusMinus(n, arr);
    return 0;
}
