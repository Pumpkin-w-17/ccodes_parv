#include <stdio.h>

int main() {
    double x, y, z;
    printf("Enter three side lengths: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    // check for triangle inequality
    if (x <= 0 || y <= 0 || z <= 0 ||
        x + y <= z || x + z <= y || y + z <= x) {
        printf("Not a valid triangle\n");
        return 0;
    }

    if (x == y && y == z)
        printf("Equilateral triangle\n");
    else if (x == y || y == z || x == z)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");

    return 0;
}
// This program reads three side lengths from the user and determines