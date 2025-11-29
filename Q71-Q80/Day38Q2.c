#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    if (r != c) {
        printf("False\n");
        return 0;
    }

    int symmetric = 1;
    for (int i = 0; i < r && symmetric; i++)
        for (int j = i + 1; j < c; j++)
            if (a[i][j] != a[j][i]) { symmetric = 0; break; }

    printf(symmetric ? "True\n" : "False\n");
    return 0;
}
// This program checks if a given square matrix is symmetric.