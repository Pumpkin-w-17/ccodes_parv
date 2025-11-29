#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // increasing odds 1 .. (2n-1)
    for (int i = 1; i <= n; ++i) {
        int stars = 2*i - 1;
        for (int k = 0; k < stars; ++k) putchar('*');
        printf(" ");
    }

    // decreasing odds starting at 2*(n-2)-1 down to 1
    int start = 2*(n-2) - 1;
    for (int s = start; s >= 1; s -= 2) {
        for (int k = 0; k < s; ++k) putchar('*');
        if (s > 1) printf(" ");
    }

    printf("\n");
    return 0;
}
//#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // increasing odds 1 .. (2n-1)
    for (int i = 1; i <= n; ++i) {
        int stars = 2*i - 1;
        for (int k = 0; k < stars; ++k) putchar('*');
        printf(" ");
    }

    // decreasing odds starting at 2*(n-2)-1 down to 1
    int start = 2*(n-2) - 1;
    for (int s = start; s >= 1; s -= 2) {
        for (int k = 0; k < s; ++k) putchar('*');
        if (s > 1) printf(" ");
    }

    printf("\n");
    return 0;
}
//Sample (input 4) →
//* *** ***** ******* *** *