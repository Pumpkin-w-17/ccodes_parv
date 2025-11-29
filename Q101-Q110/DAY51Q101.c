/* Q101_first_last.c */
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
    int target; scanf("%d", &target);

    int lb = lower_bound(a, n, target);
    if (lb == n || a[lb] != target){
        printf("-1 -1\n");
    } else {
        int ub = lower_bound(a, n, target + 1);
        printf("%d %d\n", lb, ub - 1);
    }
    free(a);
    return 0;
}
// this program finds the first and last positions of a target value in a sorted array using binary search. 