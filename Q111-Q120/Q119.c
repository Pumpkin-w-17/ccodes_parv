/* Q119_find_repeated_safe.c */
#include <stdio.h>
#include <stdlib.h>

static int cmp(const void *p, const void *q){
    int a = *(const int*)p, b = *(const int*)q;
    return (a > b) - (a < b);
}

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 1){ printf("-1\n"); return 0; }
    int *a = malloc((size_t)n * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    qsort(a, (size_t)n, sizeof(int), cmp);
    for (int i = 1; i < n; ++i){
        if (a[i] == a[i-1]){ printf("%d\n", a[i]); free(a); return 0; }
    }
    printf("-1\n");
    free(a);
    return 0;
}
// this program finds and prints the first repeated integer in a list, or -1 if there are no repeats.