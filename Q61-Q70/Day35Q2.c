#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < k; i++) {
        int last = a[n-1];
        for (int j = n-1; j > 0; j--)
            a[j] = a[j-1];
        a[0] = last;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n-1) printf(" ");
    }

    return 0;
}
// This program performs k right rotations on an array of n integers and prints the resulting array.