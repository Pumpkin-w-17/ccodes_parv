/* Q104_pivot_integer.c */
#include <stdio.h>
#include <math.h>

int main(void){
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    long long total = n * (n + 1) / 2;
    long long root = (long long) floor(sqrt((double) total) + 0.5);
    if (root * root == total && root >= 1 && root <= n) printf("%lld\n", root);
    else printf("-1\n");
    return 0;
}
// this program tell us whether there exists a pivot integer x such that the sum of integers from 1 to x equals the sum of integers from x to n. If such an integer exists, it prints the integer; otherwise, it prints -1.