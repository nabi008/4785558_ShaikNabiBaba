#include <stdio.h>
int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);
    int unique[n];
    int u = 0;
    unique[u++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) unique[u++] = ranked[i];
    }
    scanf("%d", &m);
    int player[m];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);
    int idx = u - 1;
    for (int i = 0; i < m; i++) {
        int score = player[i];
        while (idx >= 0 && score >= unique[idx]) idx--;
        printf("%d\n", idx + 2);
    }
    return 0;
}
