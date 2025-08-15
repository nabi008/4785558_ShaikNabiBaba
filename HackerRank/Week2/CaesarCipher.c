#include <stdio.h>
#include <string.h>
int main() {
    int n, k;
    char s[1000];
    scanf("%d%s%d", &n,s,&k);
    k = k%26;
    for (int i=0;i<n;i++) {
        char c=s[i];
        if (c>='a' && c<='z') c=((c-'a'+k)%26)+'a';
        else if (c>='A' && c<='Z') c=((c-'A'+k)%26)+'A';
        s[i]=c;
    }
    printf("%s\n",s);
    return 0;
}
