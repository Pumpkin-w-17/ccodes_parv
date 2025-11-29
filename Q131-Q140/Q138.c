#include <stdio.h>

enum Color {
    RED,
    BLUE,
    GREEN,
    YELLOW
};

int main() {
    const char *colorNames[] = {"RED", "BLUE", "GREEN", "YELLOW"};
    enum Color c;

    for (c = RED; c <= YELLOW; c++) {
        printf("%s = %d\n", colorNames[c], c);
    }

    return 0;
}
// Print all enum names and integer values using a loop.

