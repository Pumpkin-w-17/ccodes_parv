#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int v = 0, c = 0;

    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char ch = s[i];

        if(ch >= 'A' && ch <= 'Z') ch = ch + 32; // to lowercase

        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels=%d, Consonants=%d", v, c);
    return 0;
}
// This program counts the number of vowels and consonants in a given string.