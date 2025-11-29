#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s); if (n && s[n-1]=='\n') s[--n]=0;

    // split into words
    char *words[100];
    int wc = 0;
    char *p = s;
    while (*p) {
        while (*p == ' ') p++;
        if (!*p) break;
        words[wc++] = p;
        while (*p && *p != ' ') p++;
        if (*p) { *p = '\0'; p++; }
    }

    if (wc == 0) return 0;
    // print initials for all but last
    for (int i = 0; i < wc - 1; i++) {
        char ch = words[i][0];
        if (ch >= 'a' && ch <= 'z') ch -= ('a' - 'A');
        putchar(ch);
        putchar('.');
    }
    if (wc > 1) {
        putchar(' ');
        // print surname (last word) as-is
        printf("%s", words[wc-1]);
    } else {
        // only one name: print it (matching no sample but safe)
        printf("%s", words[0]);
    }
    return 0;
}
// initials with surname full