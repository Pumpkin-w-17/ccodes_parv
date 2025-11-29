#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } 
        else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    if (second == INT_MIN) printf("No Second Largest");
    else printf("%d", second);

    return 0;
}
// This program finds the second largest unique number in an array of integers.