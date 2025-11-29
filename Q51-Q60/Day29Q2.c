#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int mx = a[0], mn = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }
    printf("Max=%d Min=%d\n", mx, mn);
    return 0;
}
//Sample (input): 5 3 9 -1 7 0 → Max=9 Min=-1