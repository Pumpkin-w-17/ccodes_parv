#include <stdio.h>
#include <ctype.h>

int main(void){
    FILE *f = fopen("input.txt", "r");
    if (!f){ perror("Cannot open input.txt"); return 0; }

    long vowels = 0, consonants = 0;
    int c;

    while ((c = fgetc(f)) != EOF){
        if (isalpha(c)){
            char x = tolower(c);
            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(f);

    printf("Vowels: %ld\nConsonants: %ld\n", vowels, consonants);
    return 0;
}
// this program counts vowels and consonants in a text file named "input.txt"