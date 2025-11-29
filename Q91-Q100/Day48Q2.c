#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s); if (n && s[n-1]=='\n') s[--n]=0;

    int i = 0;
    int first = 1;
    while (s[i]) {
        if (s[i] == ' ') { putchar(' '); i++; continue; }
        int start = i;
        while (s[i] && s[i] != ' ') i++;
        int end = i - 1;
        for (int k = end; k >= start; k--) putchar(s[k]);
    }
    return 0;
}
// This program reads a line of text and reverses each word while preserving spaces.