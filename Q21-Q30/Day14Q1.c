#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    int odd = 1;
    for (int i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
// This program calculates the sum of the first n odd natural numbers.