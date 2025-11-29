/* Q102_ceil_index.c */
#include <stdio.h>
#include <stdlib.h>

int lower_bound(int *a, int n, int x){
    int l = 0, r = n;
    while (l < r){
        int m = l + (r - l) / 2;
        if (a[m] < x) l = m + 1;
        else r = m;
    }
    return l;
}

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int x; scanf("%d", &x);

    int idx = lower_bound(a, n, x);
    if (idx == n) printf("-1\n");
    else printf("%d\n", idx);
    free(a);
    return 0;
}
// this program finds the index of the smallest element in a sorted array that is greater than or equal to a given value x. If no such element exists, it returns -1.