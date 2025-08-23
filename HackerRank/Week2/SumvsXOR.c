#include <stdio.h>
int main(){
    unsigned long long n;
    scanf("%llu", &n);
    int zeroCount=0;
    unsigned long long temp=n;
    while(temp>0){
        if ((temp % 2)==0) zeroCount++;
        temp=temp/2;
    }
    unsigned long long result=1;
    for (int i=0;i<zeroCount;i++) result=result*2;
    printf("%llu\n",result);
    return 0;
}
