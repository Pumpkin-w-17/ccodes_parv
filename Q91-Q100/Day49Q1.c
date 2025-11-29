#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s); if (n && s[n-1]=='\n') s[--n]=0;

    int i = 0;
    int printed = 0;
    while (s[i]) {
        while (s[i] == ' ') i++;
        if (!s[i]) break;
        if (isalpha((unsigned char)s[i])) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') ch -= ('a' - 'A');
            putchar(ch);
            putchar('.');
            printed = 1;
            // move to end of this word
            while (s[i] && s[i] != ' ') i++;
        } else i++;
    }
    return 0;
}
// print initials of words in uppercase followed by a dot