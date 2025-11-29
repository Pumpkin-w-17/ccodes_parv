#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    for(int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if(s[i] == ' ')
            printf("-");
        else
            printf("%c", s[i]);
    }

    return 0;
}
// replaces all spaces with hyphens