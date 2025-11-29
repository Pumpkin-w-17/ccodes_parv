#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    long long rev = 0;   // store reversed binary (e.g. 1101 becomes 1011)
    while (n > 0) {
        rev = rev * 10 + (n % 2);
        n /= 2;
    }

    // print correct order
    while (rev > 0) {
        printf("%lld", rev % 10);
        rev /= 10;
    }

    return 0;
}
// This program reads an integer, converts it to binary, reverses the binary digits, and prints the reversed binary representation.