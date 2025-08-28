#include <stdio.h>
#define MAXN 100000
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int q[MAXN];
        for (int i = 0; i < n; i++) scanf("%d", &q[i]);
        int total_bribes = 0;
        int chaotic = 0;
        for (int i = 0; i < n; i++) {
            int person = q[i];
            int current_pos = i + 1;
            if (person - current_pos > 2) {
                chaotic = 1;
                break;
            }
            int start = person - 2;
            if (start < 1) start = 1;
            for (int j = start - 1; j < i; j++) {
                if (q[j] > person) total_bribes++;
            }
        }
        if (chaotic) printf("Too chaotic\n");
        else printf("%d\n", total_bribes);
    }
    return 0;
}
