/* Q120_sentence_case.c */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char buf[10005];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    size_t L = strlen(buf);
    if (L && buf[L-1] == '\n') buf[--L] = 0;
    int i = 0;
    while (buf[i] && isspace((unsigned char)buf[i])) i++;
    if (buf[i]){
        buf[i] = toupper((unsigned char)buf[i]);
        for (int j = i + 1; buf[j]; ++j) buf[j] = tolower((unsigned char)buf[j]);
    }
    printf("%s\n", buf);
    return 0;
}
// this program tells how to convert a string to sentence case