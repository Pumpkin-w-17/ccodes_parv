#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int left = 0, right = n - 1;
    while (left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n-1) printf(" ");
    }

    return 0;
}
// Write a program to read an integer n and an array of n integers, then reverse the array and print the reversed array.