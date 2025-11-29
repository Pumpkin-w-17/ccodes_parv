#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000];
    if (!fgets(a, sizeof a, stdin)) return 0;
    if (!fgets(b, sizeof b, stdin)) return 0;
    int na = strlen(a); if (na && a[na-1]=='\n') a[--na]=0;
    int nb = strlen(b); if (nb && b[nb-1]=='\n') b[--nb]=0;

    if (na != nb) { printf("Not anagrams"); return 0; }

    int cnt[256] = {0};
    for (int i = 0; i < na; i++) cnt[(unsigned char)a[i]]++;
    for (int i = 0; i < nb; i++) cnt[(unsigned char)b[i]]--;

    for (int i = 0; i < 256; i++) if (cnt[i] != 0) { printf("Not anagrams"); return 0; }
    printf("Anagrams");
    return 0;
}
// check if two strings are anagrams