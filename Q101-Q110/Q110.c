/* Q110_sliding_window_max.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int k; scanf("%d", &k);
    if (k > n){ printf("-1\n"); free(a); return 0; }
    for (int i = 0; i <= n - k; ++i){
        int mx = a[i];
        for (int j = i + 1; j < i + k; ++j) if (a[j] > mx) mx = a[j];
        if (i) printf(" ");
        printf("%d", mx);
    }
    printf("\n");
    free(a);
    return 0;
}
// this program tells us the maximum value in each sliding window of size k in an array of n integers.