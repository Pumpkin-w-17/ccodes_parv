#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%d ", i);

    return 0;
}
// This program takes an integer input 'n' from the user and prints all integers from 1 to n.