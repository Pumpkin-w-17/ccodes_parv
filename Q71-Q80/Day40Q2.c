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

    if (c1 != r2) {
        printf("Not Possible\n");
        return 0;
    }

    int C[100][100];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            if (j > 0) printf(" ");
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// This program multiplies two matrices A and B if their dimensions are compatible. If not, it prints not possible