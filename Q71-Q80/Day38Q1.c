#include <stdio.h>

int main() {
    int r1, c1;
    scanf("%d %d", &r1, &c1);
    int A[100][100];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    int r2, c2;
    scanf("%d %d", &r2, &c2);
    int B[100][100];
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // assume dimensions match as in sample
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (j > 0) printf(" ");
            printf("%d", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// This program reads two matrices from input, adds them element-wise, and prints the resulting matrix.