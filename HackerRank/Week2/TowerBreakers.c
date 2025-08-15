#include <stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&n,&m);
        if(m==1 || n%2==0){
            printf("%d\n",2);
        }
        else{
            printf("%d\n",1);
        }
    }
}