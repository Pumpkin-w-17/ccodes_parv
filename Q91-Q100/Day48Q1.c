#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    if (!fgets(s1, sizeof s1, stdin)) return 0;
    if (!fgets(s2, sizeof s2, stdin)) return 0;
    int n1 = strlen(s1); if (n1 && s1[n1-1]=='\n') s1[--n1]=0;
    int n2 = strlen(s2); if (n2 && s2[n2-1]=='\n') s2[--n2]=0;

    if (n1 != n2) { printf("Not rotation"); return 0; }

    char temp[2005];
    temp[0] = '\0';
    strcat(temp, s1);
    strcat(temp, s1); // s1+s1

    if (strstr(temp, s2)) printf("Rotation");
    else printf("Not rotation");
    return 0;
}
// if one string is rotation of another