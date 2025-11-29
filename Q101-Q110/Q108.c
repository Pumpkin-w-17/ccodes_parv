/* Q108_product_except_self.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    long long *left = malloc(n * sizeof(long long));
    long long *right = malloc(n * sizeof(long long));
    left[0] = 1;
    for (int i = 1; i < n; ++i) left[i] = left[i-1] * a[i-1];
    right[n-1] = 1;
    for (int i = n - 2; i >= 0; --i) right[i] = right[i+1] * a[i+1];

    for (int i = 0; i < n; ++i){
        long long prod = left[i] * right[i];
        if (i) printf(" ");
        printf("%lld", prod);
    }
    printf("\n");
    free(a); free(left); free(right);
    return 0;
}
// this program tells us how to compute the product of all elements except self without using division.