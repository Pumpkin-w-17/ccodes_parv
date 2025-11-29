/* Q113_kth_smallest.c */
#include <stdio.h>
#include <stdlib.h>

static int cmp(const void *p, const void *q){
    int a = *(const int*)p, b = *(const int*)q;
    return (a > b) - (a < b);
}

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0){ printf("-1\n"); return 0; }
    int *a = malloc((size_t)n * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int k; scanf("%d", &k);
    if (k < 1 || k > n){ printf("-1\n"); free(a); return 0; }
    qsort(a, (size_t)n, sizeof(int), cmp);
    printf("%d\n", a[k-1]);
    free(a);
    return 0;
}
// this program tells us the k-th smallest number among n numbers                                                                            