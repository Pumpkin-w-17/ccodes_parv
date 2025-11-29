#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; ++i) {
        printf("*");
        if (i < n-1) printf(" ");
    }
    printf("\n");
    return 0;
}
//prints * * * * * * * * * * * * *