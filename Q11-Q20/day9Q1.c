#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Coefficient a cannot be 0 for a quadratic equation.\n");
        return 0;
    }

    double d = b*b - 4*a*c;

    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2*a);
        double r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("r1 = %.6lf\nr2 = %.6lf\n", r1, r2);
    } else if (d == 0) {
        double r = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("r = %.6lf\n", r);
    } else { // d < 0
        double real = -b / (2*a);
        double imag = sqrt(-d) / (2*a);
        printf("Roots are complex (conjugate pair):\n");
        printf("r1 = %.6lf + %.6lfi\n", real, imag);
        printf("r2 = %.6lf - %.6lfi\n", real, imag);
    }

    return 0;
}
// This program calculates the roots of a quadratic equation ax^2 + bx + c = 0
// based on the coefficients provided by the user. It handles real and complex roots.