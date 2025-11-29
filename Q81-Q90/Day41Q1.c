#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int count = 0;
    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        count++;

    printf("%d", count);
    return 0;
}
// count characters in a string without using built-in length functions