#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    if (x <= 1) return 0;
    if (x <= 3) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i * (long long)i <= x; i += 2)
        if (x % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            printf("%d", i);
            if (i + 1 <= n) printf(" ");
        }
    }
    printf("\n");
    return 0;
}
//Sample (input 20) →
//2 3 5 7 11 13 17 19