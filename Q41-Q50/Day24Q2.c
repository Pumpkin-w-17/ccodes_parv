#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) printf("%d", j);
        if (i < n) printf(" ");
    }
    printf("\n");
    return 0;
}
//12 123 1234 so on