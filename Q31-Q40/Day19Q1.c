#include <stdio.h>

int main() {
    int a, b, x, y;
    scanf("%d %d", &a, &b);

    x = a; 
    y = b;

    while (x != y) {
        if (x < y) x += a;
        else y += b;
    }

    printf("%d", x);
    returnj 0;
}
// This program calculates the least common multiple (LCM) of two integers a and b