#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c eats any whitespace

    if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ) {
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
            ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            printf("%c is a vowel\n", ch);
        else
            printf("%c is a consonant\n", ch);
    } else {
        printf("Input is not an alphabet character\n");
    }

    return 0;
}
// This program checks if the entered character is a vowel or consonant.