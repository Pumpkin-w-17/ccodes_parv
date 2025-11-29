#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("%d is positive\n", n);
    } else {
        if (n < 0)
            printf("%d is negative\n", n);
        else
            printf("Number is zero\n");
    }

    return 0;
}
// This program checks if an integer is positive, negative, or zero using nested if-else statements.