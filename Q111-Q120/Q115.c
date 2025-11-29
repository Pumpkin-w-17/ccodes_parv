/* Q115_anagram.c */
#include <stdio.h>
#include <string.h>

int main(void){
    char s[10005], t[10005];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    if (!fgets(t, sizeof(t), stdin)) return 0;
    s[strcspn(s, "\n")] = 0;
    t[strcspn(t, "\n")] = 0;
    if (strlen(s) != strlen(t)){ printf("Not Anagram\n"); return 0; }
    int cnt[26] = {0};
    for (int i = 0; s[i]; ++i) cnt[s[i] - 'a']++;
    for (int i = 0; t[i]; ++i) cnt[t[i] - 'a']--;
    for (int i = 0; i < 26; ++i) if (cnt[i] != 0){ printf("Not Anagram\n"); return 0; }
    printf("Anagram\n");
    return 0;
}
// this program tell us whether two input strings are anagrams of each other or not.