/* Q112_kadane.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0){ printf("0\n"); return 0; }
    long long *a = malloc((size_t)n * sizeof(long long));
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%lld", &a[i]);

    long long max_ending = a[0], max_so_far = a[0];
    for (int i = 1; i < n; ++i){
        if (max_ending < 0) max_ending = a[i];
        else max_ending += a[i];
        if (max_ending > max_so_far) max_so_far = max_ending;
    }
    printf("%lld\n", max_so_far);
    free(a);
    return 0;
}
// this program tell us the maximum subarray sum using Kadane's algorithm