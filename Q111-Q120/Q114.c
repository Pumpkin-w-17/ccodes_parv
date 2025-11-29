/* Q114_longest_unique_substring.c */
#include <stdio.h>
#include <string.h>

int main(void){
    char s[10005];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    size_t L = strlen(s);
    if (L && s[L-1] == '\n') s[L-1] = '\0';
    int last[256];
    for (int i = 0; i < 256; ++i) last[i] = -1;
    int start = 0, best = 0;
    for (int i = 0; s[i]; ++i){
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        int len = i - start + 1;
        if (len > best) best = len;
    }
    printf("%d\n", best);
    return 0;
}
// this program tell us the length of the longest substring without repeating characters