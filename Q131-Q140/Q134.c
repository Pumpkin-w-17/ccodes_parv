#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    // Try all three by changing the value:
    s = SUCCESS;

    if (s == SUCCESS) {
        printf("Operation Successful\n");
    } else if (s == FAILURE) {
        printf("Operation Failed\n");
    } else if (s == TIMEOUT) {
        printf("Operation Timed Out\n");
    } else {
        printf("Unknown Status\n");
    }

    return 0;
}
// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
