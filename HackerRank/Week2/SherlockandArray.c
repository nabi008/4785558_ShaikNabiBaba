#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int arr[n];
        long total=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            total+=arr[i];
        }
        long left=0;
        int ok=0;
        for(int i=0;i<n;i++){
            long right=total-left-arr[i];
            if(left==right){
                ok=1;
                break;
            }
            left+=arr[i];
        }
        if(ok) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
