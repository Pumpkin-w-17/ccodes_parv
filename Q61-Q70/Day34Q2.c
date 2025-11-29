#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &x);

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) { pos = i; break; }
    }

    if (pos == -1) {
        printf("Element Not Found");
        return 0;
    }

    for (int i = pos; i < n-1; i++) a[i] = a[i+1];

    for (int i = 0; i < n-1; i++) {
        printf("%d", a[i]);
        if (i < n-2) printf(" ");
    }

    return 0;
}
// Write a program to delete the first occurrence of an element x from an array of size n. If the element is not found, print "Element Not Found". After deletion, print the updated array elements separated by spaces.