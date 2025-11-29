/* Q117_merge_sorted.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int m;
    if (scanf("%d", &m) != 1) return 0;
    int *a = malloc((size_t)m * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < m; ++i) scanf("%d", &a[i]);
    int n; scanf("%d", &n);
    int *b = malloc((size_t)n * sizeof(int));
    if (!b){ free(a); return 0; }
    for (int i = 0; i < n; ++i) scanf("%d", &b[i]);

    int i = 0, j = 0;
    int first = 1;
    while (i < m && j < n){
        int v = (a[i] <= b[j]) ? a[i++] : b[j++];
        if (!first) printf(" ");
        printf("%d", v);
        first = 0;
    }
    while (i < m){ if (!first) printf(" "); printf("%d", a[i++]); first = 0; }
    while (j < n){ if (!first) printf(" "); printf("%d", b[j++]); first = 0; }
    printf("\n");
    free(a); free(b);
    return 0;
}
// this program merges two sorted arrays into a single sorted array