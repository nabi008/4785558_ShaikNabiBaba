#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int s[100];
    for (int i=0;i<n;i++) scanf("%d", &s[i]);
    int d, m;
    scanf("%d %d", &d, &m);
    int count=0;
    for (int start=0;start<=n-m;start++) {
        int sum=0;
        for (int j=start;j<start+m;j++) sum += s[j];
        if (sum==d) count++;
    }
    printf("%d\n",count);
    return 0;
}

