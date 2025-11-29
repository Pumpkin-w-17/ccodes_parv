#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    const char *monthNames[] = {
        "",         // index 0 not used
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    enum Month m;
    for (m = JAN; m <= DEC; m++) {
        int days;

        switch (m) {
            case APR: case JUN: case SEP: case NOV:
                days = 30;
                break;
            case FEB:
                // Normally 28, 29 in leap year
                days = 28;
                break;
            default:
                days = 31;
        }

        printf("%s has %d days\n", monthNames[m], days);
    }

    return 0;
}
// Create an enum for months and print how many days each month has.
