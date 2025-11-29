#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) ++even;
        else ++odd;
    }
    printf("Even=%d Odd=%d\n", even, odd);
    return 0;
}
//Sample (input): 6 1 2 3 4 5 6 → Even=3 Odd=3