/* Q107_prev_greater.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i){
        int pg = -1;
        for (int j = i - 1; j >= 0; --j) if (a[j] > a[i]){ pg = a[j]; break; }
        printf("%d", pg);
        if (i < n - 1) printf(",");
    }
    printf("\n");
    free(a);
    return 0;
}
// this program tells us the previous greater element for each element in an array