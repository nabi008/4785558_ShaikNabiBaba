#include <stdio.h>
#define MAX 100005
int main() {
    char s[MAX];
    int freq[26] = {0};
    int countFreq[MAX] = {0};
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            countFreq[freq[i]]++;
        }
    }
    int f1 = 0, c1 = 0, f2 = 0, c2 = 0;
    for (int f = 1; f < MAX; f++) {
        if (countFreq[f] > 0) {
            if (f1 == 0) {
                f1 = f;
                c1 = countFreq[f];
            } else {
                f2 = f;
                c2 = countFreq[f];
            }
        }
    }
    int valid = 0;
    if (f2 == 0) {
        valid = 1;
    } else if ((f1 == 1 && c1 == 1) || (f2 == f1 + 1 && c2 == 1) || (f1 == f2 + 1 && c1 == 1)) {
        valid = 1;
    }
    if (valid) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
