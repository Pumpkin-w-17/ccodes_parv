#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int sp = 0, dig = 0, spec = 0;

    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char ch = s[i];

        if(ch == ' ')
            sp++;
        else if(ch >= '0' && ch <= '9')
            dig++;
        else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            ; // do nothing
        else
            spec++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", sp, dig, spec);

    return 0;
}
// counts spaces, digits, and special characters in a given string.