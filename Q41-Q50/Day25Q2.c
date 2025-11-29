#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = n; i >= 1; --i) {
        for (int j = 0; j < i; ++j) putchar('*');
        if (i > 1) putchar(' ');
    }
    putchar('\n');
    return 0;
}
// This program reads an integer n and prints a pattern of asterisks in descending order from n to 1, separated by spaces. For example, if the input is 5, the output will be:
// ***** **** *** ** *