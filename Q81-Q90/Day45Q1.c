#include <stdio.h>

int main() {
    char s[1000], ch;
    fgets(s, 1000, stdin);
    scanf("%c", &ch);

    int count = 0;
    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if(s[i] == ch)
            count++;

    printf("%d", count);

    return 0;
}
// This program counts the occurrences of a specified character in a given string.