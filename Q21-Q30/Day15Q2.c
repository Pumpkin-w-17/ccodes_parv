#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    printf("Reversed number = %d\n", rev);

   return 0;
}
// This program reads an integer from the user, reverses its digits, and prints the reversed number.