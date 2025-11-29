#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    long long sum = 0;
    for (int i = 0; i < n; ++i) { scanf("%d", &a[i]); sum += a[i]; }
    printf("%lld\n", sum);
    return 0;
}
//Sample (input): 4 1 2 3 4 → 10