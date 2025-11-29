#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int start = n - i + 1;
        for (int j = start; j <= n; j++) printf("%d", j);
        printf("\n");
    }

    return 0;
}
// 5 45 345 2345 12345