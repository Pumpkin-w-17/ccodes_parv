#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }

    printf("%d", a);
    return 0;
}
// This program calculates the Greatest Common Divisor (GCD) of two integers using the subtraction method.