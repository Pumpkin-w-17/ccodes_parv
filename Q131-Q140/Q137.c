#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // You can change this value: ADMIN / USER / GUEST
    r = GUEST;

    if (r == ADMIN) {
        printf("ADMIN: Full access granted.\n");
    } else if (r == USER) {
        printf("USER: Limited access granted.\n");
    } else if (r == GUEST) {
        printf("GUEST: Very limited access.\n");
    } else {
        printf("Unknown role.\n");
    }

    return 0;
}
//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
