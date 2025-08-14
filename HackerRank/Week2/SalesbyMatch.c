#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int count=0;
    int i=0;
    int j=i+1;
    while(i<=n){
        if(arr[i]==arr[j]){
            count++;
            i=j+1;
            j+=2;
        }
        else{
            i++;
            j++;
        }
    }
    printf("%d",count);
    return 0;
}