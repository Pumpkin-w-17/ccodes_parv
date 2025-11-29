#include <stdio.h>

int main() {
    int n, t, sum = 0, d;
    scanf("%d", &n);

    t = n;
    while (t > 0) {
        d = t % 10;
        sum += d*d*d;
        t /= 10;
    }

    if (sum == n) printf("Armstrong");
    else printf("Not Armstrong");

    return 0;
}
// This program checks if a given number is an Armstrong number or not.