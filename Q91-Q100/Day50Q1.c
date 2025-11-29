#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = strlen(s); if (n && s[n-1]=='\n') s[--n]=0;

    char dd[5] = {0}, mm[5] = {0}, yyyy[10] = {0};
    sscanf(s, "%2[^/]/%2[^/]/%4s", dd, mm, yyyy);

    const char *months[] = {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };
    int m = atoi(mm);
    if (m >= 1 && m <= 12) printf("%s-%s-%s", dd, months[m-1], yyyy);
    else printf("%s-%s-%s", dd, mm, yyyy); // fallback

    return 0;
}
// this program reads a date in "DD/MM/YYYY" format and outputs it in "DD-MMM-YYYY" format.