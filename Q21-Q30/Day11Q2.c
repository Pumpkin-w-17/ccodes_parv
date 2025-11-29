#include <stdio.h>

int main() {
    float cp, sp, perc;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        perc = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", perc);
    } else if (cp > sp) {
        perc = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", perc);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
// This program calculates profit or loss percentage based on cost price and selling price.