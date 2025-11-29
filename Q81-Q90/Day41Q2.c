#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        printf("%c\n", s[i]);

    return 0;
}
//prints each charactyer in a new line