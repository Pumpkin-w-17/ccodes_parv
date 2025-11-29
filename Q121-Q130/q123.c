#include <stdio.h>
#include <ctype.h>

int main(void){
    FILE *f = fopen("input.txt", "r");
    if (!f){ perror("Cannot open input.txt"); return 0; }

    long chars = 0, words = 0, lines = 0;
    int in_word = 0, c;

    while ((c = fgetc(f)) != EOF){
        chars++;
        if (c == '\n') lines++;

        if (isspace(c)){
            in_word = 0;
        } else {
            if (!in_word){
                words++;
                in_word = 1;
            }
        }
    }
    fclose(f);

    printf("Characters: %ld\nWords: %ld\nLines: %ld\n",
           chars, words, lines);
    return 0;
}
// This program reads a text file named "input.txt" and counts the number of characters, words, and lines in it.