#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        else if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        printf("%c", ch);
    }

    return 0;
}
// This program reads a string from standard input and toggles the case of each alphabetic character.