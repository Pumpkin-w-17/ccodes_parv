/* Q116_two_sum_bruteforce.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0){ printf("-1 -1\n"); return 0; }
    int *a = malloc((size_t)n * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int target; scanf("%d", &target);
    for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j)
        if (a[i] + a[j] == target){ printf("%d %d\n", i, j); free(a); return 0; }
    printf("-1 -1\n");
    free(a);
    return 0;
}
// this program tell us the indices of two numbers that add up to a target value using a brute-force approach