#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s);
    if (n && s[n-1] == '\n') s[--n] = '\0';

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        char lo = ch;
        if (ch >= 'A' && ch <= 'Z') lo = ch + ('a' - 'A');
        if (lo=='a'||lo=='e'||lo=='i'||lo=='o'||lo=='u') continue;
        putchar(ch);
    }
    return 0;
}
// remove vowels from input string and print the result