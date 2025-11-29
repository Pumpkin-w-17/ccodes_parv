#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n')
        len++;

    for(int i = len - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}
// This program reads a string from standard input and prints it in reverse order.