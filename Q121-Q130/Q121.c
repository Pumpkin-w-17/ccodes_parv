/* Q121_write_info.c */
#include <stdio.h>
#include <string.h>

int main(void){
    char name[200];
    int age;

    printf("Enter name: ");
    if (!fgets(name, sizeof(name), stdin)) return 0;
    name[strcspn(name, "\n")] = 0; // strip newline

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) return 0;

    FILE *f = fopen("info.txt", "w");
    if (!f){ perror("Cannot open file"); return 0; }
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);

    printf("Data saved to info.txt successfully.\n");
    return 0;
}
// this program tell us to write name and age into a file named info.txt