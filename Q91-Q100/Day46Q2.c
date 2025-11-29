#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s);
    if (n && s[n-1] == '\n') s[--n] = '\0';

    int freq[26] = {0};
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') freq[ch - 'a']++;
    }
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z' && freq[ch - 'a'] > 1) {
            printf("%c", ch);
            return 0;
        }
    }
    return 0;
}
//first repeating lowercase letter in a string