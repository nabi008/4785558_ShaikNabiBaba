#include <stdio.h>
void miniMaxSum(int arr[],int arr_length) {
    //using bubble sort to sort the array
    for (int i=0;i<arr_length-1;i++) {
        for (int j=i+1;j<arr_length;j++) {
            if (arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long min=0,max=0;
    for(int i=0;i<arr_length-1;i++) min +=arr[i];
    for(int i=1;i<arr_length;i++) max+=arr[i];
    printf("%ld %ld",min,max);
}
int main(){
    int arr[1000];
    int count=0;
    while(scanf("%d",&arr[count])==1) {
        count++;
        if (getchar()=='\n') break;
    }
    miniMaxSum(arr,count);
    return 0;  
}