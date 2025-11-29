#include <stdio.h>

int main() {
    int n, t, rev = 0;
    scanf("%d", &n);

    t = n;
    while (t > 0) {
        rev = rev * 10 + (t % 10);
        t /= 10;
    }

    if (rev == n) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}
// This program checks if a given integer is a palindrome.