#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[n];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) {
        printf("%d", a[i]);
        if (i < n-1) printf(" ");
    }
    printf("\n");
    return 0;
}
//Sample (input):
//5 10 20 30 40 50 →
//10 20 30 40 50