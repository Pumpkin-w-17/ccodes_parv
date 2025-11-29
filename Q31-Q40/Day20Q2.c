#include <stdio.h>

int main() {
    char c;
    while (scanf("%c", &c) == 1) {
        if (c == '0') printf("1");
        else if (c == '1') printf("0");
    }
    return  0;
}
// This program reads characters from standard input until EOF.