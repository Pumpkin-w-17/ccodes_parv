#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
// prints pattern * ** *** .... up to n lines.