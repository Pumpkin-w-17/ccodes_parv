#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);

    int left = 0, right = n - 1, found = -1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == key) {
            found = mid;
            break;
        }
        else if (key < a[mid]) right = mid - 1;
        else left = mid + 1;
    }

    if (found == -1) printf("Not Found");
    else printf("Found at index %d", found);

    return 0;
}
// This program performs a binary search on a sorted array to find the index of a given key.