#include <stdio.h>

enum Test {
    X,      // 0
    Y = 5,  // 5
    Z       // 6
};

int main() {
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);
    printf("Z = %d\n", Z);

    return 0;
}
// this program tells the values of enum members and shows that enum stores integer values.