#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n')
        len++;

    int pal = 1;
    for(int i = 0; i < len/2; i++) {
        if(s[i] != s[len - 1 - i]) {
            pal = 0;
            break;
        }
    }

    if(pal) printf("Palindrome");
    else    printf("Not palindrome");

    return 0;
}
// This program reads a string from standard input and checks if it is a palindrome.