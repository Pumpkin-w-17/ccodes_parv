#include <stdio.h>

int main() {
    int days, fine;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0)
        fine = 0;
    else if (days <= 5)
        fine = days * 1;
    else if (days <= 10)
        fine = days * 2;
    else
        fine = days * 5;

    printf("Fine = Rs %d\n", fine);

    return 0;
}
// This program calculates the fine for returning a book late to the library based on the number of days it is overdue.