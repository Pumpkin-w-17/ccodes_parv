#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY",
        "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    enum Day d;
    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}
// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
