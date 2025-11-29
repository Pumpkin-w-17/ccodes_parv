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

    int distinct = 1;
    for (int i = 0; i < r && distinct; i++)
        for (int j = i + 1; j < r; j++)
            if (a[i][i] == a[j][j]) { distinct = 0; break; }

    printf(distinct ? "True\n" : "False\n");
    return 0;
}
// This program checks if all the diagonal elements of a square matrix are distinct.