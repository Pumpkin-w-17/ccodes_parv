#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int m = (r < c) ? r : c;
    int sum = 0;
    for (int i = 0; i < m; i++)
        sum += a[i][i];

    printf("%d\n", sum);
    return 0;
}
// This program reads a matrix of size r x c and calculates the sum of its main diagonal elements.