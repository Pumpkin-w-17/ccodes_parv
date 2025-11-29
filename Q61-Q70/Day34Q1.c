#include <stdio.h>

int main() {
    int n, pos, x;
    scanf("%d", &n);

    int a[n+1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d %d", &x, &pos);  // x = number, pos = position (1-based)

    for (int i = n; i >= pos; i--) a[i] = a[i-1];
    a[pos-1] = x;

    for (int i = 0; i <= n; i++) {
        printf("%d", a[i]);
        if (i < n) printf(" ");
    }

    return 0;
}
// This code reads an array of integers, inserts a new integer at a specified position, and then prints the updated array.