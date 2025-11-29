/* Q109_max_sum_subarray_k.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int k; scanf("%d", &k);
    if (k > n){ printf("-1\n"); free(a); return 0; }
    long long sum = 0;
    for (int i = 0; i < k; ++i) sum += a[i];
    long long best = sum;
    for (int i = k; i < n; ++i){
        sum += a[i];
        sum -= a[i - k];
        if (sum > best) best = sum;
    }
    printf("%lld\n", best);
    free(a);
    return 0;
}
// this program tells us the maximum sum of any contiguous subarray of length k