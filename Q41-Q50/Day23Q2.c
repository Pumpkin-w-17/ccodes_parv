#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
// This program reads an integer n and prints an n x n square of asterisks.
// For example, if the input is 3, the output will be ***