#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        unsigned long long n;
        scanf("%llu",&n);
        int count=0;
        while(n>1){
            unsigned long long p=1;
            while(p<=n){
                p=p*2;
            }
            p=p/2;
            if(p==n)n=n/2;
            else n=n-p;
            count++;
        }

        if(count%2==1) printf("Louise\n");
        else printf("Richard\n");
    }
    return 0;
}

