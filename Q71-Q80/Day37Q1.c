#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++)
            rowSum += a[i][j];
        if (i > 0) printf(" ");
        printf("%d", rowSum);
    }
    printf("\n");
    return 0;
}
// this program tells us the sum of each row in a matrix