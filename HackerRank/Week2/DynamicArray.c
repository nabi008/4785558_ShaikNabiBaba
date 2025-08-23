#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    int** seq=(int**)malloc(n * sizeof(int*));
    int* seq_len=(int*)calloc(n, sizeof(int));
    for(int i=0;i<n;i++) seq[i]=(int*)malloc(sizeof(int));
    int last_answer=0;
    for(int i=0;i<q;i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);
        int seq_index=(x^last_answer) % n;
        if (type==1) {
            seq[seq_index]=(int*)realloc(seq[seq_index],(seq_len[seq_index]+1)*sizeof(int));
            seq[seq_index][seq_len[seq_index]]=y;
            seq_len[seq_index]++;
        } else {
            int element_index=y%seq_len[seq_index];
            last_answer=seq[seq_index][element_index];
            printf("%d\n", last_answer);
        }
    }
    for (int i=0;i<n;i++) free(seq[i]);
    free(seq);
    free(seq_len);
    return 0;
}