#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    for (int i = 0; i < m; i++) printf("%d ", b[i]);

    return 0;
}
//Merge two arrays
//Given two arrays, merge them into a single array and print the merged array.