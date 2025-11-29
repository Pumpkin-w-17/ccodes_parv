#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int a[n+1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &x);

    int pos = n;
    for (int i = 0; i < n; i++) {
        if (x < a[i]) {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) a[i] = a[i-1];
    a[pos] = x;

    for (int i = 0; i <= n; i++) {
        printf("%d", a[i]);
        if (i < n) printf(" ");
    }

    return 0;
}
// Write a program to insert an integer x into a sorted array of n integers such that the array remains sorted after insertion.