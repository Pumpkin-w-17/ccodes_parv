#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    double sum = 0.0;
    for (int k = 1; k <= n; ++k) {
        double num = 2.0 * k;
        double den = 4.0 * k - 1.0;
        sum += num / den;
    }
    printf("%.6f\n", sum);
    return 0;
}
// This program reads an integer n and calculates the sum of the series:
// S = Σ (2k / (4k - 1)) for k = 1 to n