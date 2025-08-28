#include <stdio.h>

int main() {
    int t, m, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &m);
        scanf("%d", &n);
        int cost[n];
        for (int i = 0; i < n; i++) scanf("%d", &cost[i]);
        int found = 0;
        for (int i = 0; i < n - 1 && !found; i++) {
            for (int j = i + 1; j < n; j++) {
                if (cost[i] + cost[j] == m) {
                    printf("%d %d\n", i + 1, j + 1);
                    found = 1;
                    break;
                }
            }
        }
    }
    return 0;
}
