#include <stdio.h>
#include <string.h>
long digitSum(long n){
    long sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    char n[100001];
    int k;
    scanf("%s %d",n,&k);
    long sum=0;
    for(int i=0;n[i];i++) sum+=n[i]-'0';
    sum*=k;
    while(sum>=10) sum=digitSum(sum);
    printf("%ld",sum);
    return 0;
}
