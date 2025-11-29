#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s); if (n && s[n-1]=='\n') s[--n]=0;

    int first = 1;
    for (int i = 0; i < n; i++) {
        for (int len = 1; i + len <= n; len++) {
            if (!first) printf(",");
            for (int k = 0; k < len; k++) putchar(s[i + k]);
            first = 0;
        }
    }
    return 0;
}
// print all substrings of a string.