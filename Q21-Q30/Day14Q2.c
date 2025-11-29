#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
        product *= i;

    printf("Product = %lld\n", product);

    return 0;
}
// This program calculates the product of all even numbers from 2 to n.