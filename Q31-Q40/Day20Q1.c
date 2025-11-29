#include <stdio.h>

int main() {
    int n, d, prod = 1, found = 0;
    scanf("%d", &n);

    if (n < 0) n = -n;

    while (n > 0) {
        d = n % 10;
        if (d % 2 == 1) {
            prod *= d;
            found = 1;
        }
        n /= 10;
    }

    if (found) printf("%d", prod);
    else printf("0");

    return 0;
}
// This program reads an integer, computes the product of its odd digits, and prints the result.