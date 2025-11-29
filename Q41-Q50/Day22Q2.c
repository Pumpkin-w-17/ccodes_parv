#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    double sum = 0.0;
    if (n >= 1) sum = 1.0;
    for (int i = 2; i <= n; ++i) {
        double num = 2.0*i - 1.0;
        double den = 2.0*i;
        sum += num / den;
    }
    printf("%.6f\n", sum);
    return 0;
}
// This program reads an integer n and calculates the sum of the series
// S = 1 + (3/4) + (5/6) + ... + ((2n-1)/(2n))
// It then prints the result formatted to six decimal places.