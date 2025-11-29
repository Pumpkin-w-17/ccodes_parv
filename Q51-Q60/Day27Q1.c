#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    // increasing odds
    for (int i = 1; i <= n; ++i) {
        int stars = 2*i - 1;
        for (int k = 0; k < stars; ++k) putchar('*');
        printf(" ");
    }
    // decreasing odds (n-1 .. 1)
    for (int i = n-1; i >= 1; --i) {
        int stars = 2*i - 1;
        for (int k = 0; k < stars; ++k) putchar('*');
        if (i > 1) printf(" ");
    }
    printf("\n");
    return 0;
}
//* *** ***** ******* ********* ******* ***** *** *