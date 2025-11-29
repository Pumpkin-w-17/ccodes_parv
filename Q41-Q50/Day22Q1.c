#include <stdio.h>

int fact(int x) {
    int f = 1;
    while (x > 1) { f *= x; x--; }
    return f;
}

int main() {
    int n, t, sum = 0;
    if (scanf("%d", &n) != 1) return 0;
    t = (n < 0) ? -n : n;
    while (t > 0) {
        sum += fact(t % 10);
        t /= 10;
    }
    if (sum == (n < 0 ? -n : n)) printf("Strong\n");
    else printf("Not Strong\n");
    return 0;
}
//Strong number (sum of factorial of digits)