#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n >= 0 && n <= 9) { printf("%d\n", n); return 0; }

    int temp = n, pow10 = 1;
    while (temp >= 10) { temp /= 10; pow10 *= 10; } // temp = first digit
    int first = temp;
    int last = n % 10;
    int middle = (n % pow10) / 10;
    int result = last * pow10 + middle * 10 + first;
    printf("%d\n", result);
    return 0;
}
// Swap first and last digit