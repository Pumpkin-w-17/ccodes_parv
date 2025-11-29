/* Q118_find_missing.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0; // n = array length
    int *a = malloc((size_t)n * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int x = 0;
    for (int i = 0; i < n; ++i) x ^= a[i];
    for (int i = 0; i <= n; ++i) x ^= i;
    printf("%d\n", x);
    free(a);
    return 0;
}
// this program finds the missing number in an array containing n distinct numbers from 0 to n.