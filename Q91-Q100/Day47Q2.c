#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s); if (n && s[n-1]=='\n') s[--n]=0;

    int bestStart = 0, bestLen = 0;
    int i = 0;
    while (s[i]) {
        while (s[i] == ' ') i++;
        if (!s[i]) break;
        int start = i;
        int len = 0;
        while (s[i] && s[i] != ' ') { len++; i++; }
        if (len > bestLen) { bestLen = len; bestStart = start; }
    }

    for (i = 0; i < bestLen; i++) putchar(s[bestStart + i]);
    return 0;
}
// longest word in a sentence