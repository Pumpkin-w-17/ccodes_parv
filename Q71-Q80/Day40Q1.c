#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int first = 1;
    for (int d = 0; d < r + c - 1; d++) {
        for (int i = 0; i < r; i++) {
            int j = d - i;
            if (j >= 0 && j < c) {
                if (!first) printf(" ");
                printf("%d", a[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");
    return 0;
}
// This program reads a matrix of size r x c and prints its elements in a diagonal order.