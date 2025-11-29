#include <stdio.h>

int main() {
    float pct;
    printf("Enter percentage: ");
    scanf("%f", &pct);

    if (pct < 0 || pct > 100) {
        printf("Invalid percentage\n");
        return 0;
    }

    if (pct >= 90)
        printf("Grade = A\n");
    else if (pct >= 80)
        printf("Grade = B\n");
    else if (pct >= 70)
        printf("Grade = C\n");
    else if (pct >= 60)
        printf("Grade = D\n");
    else if (pct >= 50)
        printf("Grade = E\n");
    else
        printf("Grade = F\n");

    return 0;
}
// This program reads a percentage from the user and outputs the corresponding grade based on predefined ranges.