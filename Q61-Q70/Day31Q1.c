#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &key);

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            found = i;
            break;
        }
    }

    if (found == -1) printf("Not Found");
    else printf("Found at index %d", found);

    return 0;
}
// Write a program to search for an element in an array. If found, print the index of the first occurrence; otherwise, print "Not Found".