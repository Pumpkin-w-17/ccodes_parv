#include <stdio.h>
#include <ctype.h>

int main(void){
    FILE *fin = fopen("input.txt", "r");
    if (!fin){ perror("Cannot open input.txt"); return 0; }

    FILE *fout = fopen("output.txt", "w");
    if (!fout){ perror("Cannot open output.txt"); fclose(fin); return 0; }

    int c;
    while ((c = fgetc(fin)) != EOF){
        fputc(toupper(c), fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Converted input.txt -> output.txt (lowercase -> uppercase).\n");
    return 0;
}
// This program reads from "input.txt", converts all lowercase letters to uppercase, and writes the result to "output.txt".