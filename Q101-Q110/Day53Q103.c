/* Q103_pivot_index.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long *a = malloc(n * sizeof(long long));
    long long total = 0;
    for (int i = 0; i < n; ++i){ scanf("%lld", &a[i]); total += a[i]; }
    long long left = 0;
    for (int i = 0; i < n; ++i){
        long long right = total - left - a[i];
        if (left == right){ printf("%d\n", i); free(a); return 0; }
        left += a[i];
    }
    printf("-1\n");
    free(a);
    return 0;
}
// this program finds the pivot index of an array where the sum of the elements to the left equals the sum of the elements to the right.