#include <stdio.h>
#include <string.h>

int main(void){
    char filename[256];
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;

    FILE *f = fopen(filename, "a");
    if (!f){ perror("Cannot open file"); return 0; }

    char line[1000];
    fgets(line, sizeof(line), stdin);

    if (line[strlen(line)-1] != '\n')
        fprintf(f, "%s\n", line);
    else
        fputs(line, f);

    fclose(f);
    printf("Appended to %s\n", filename);
    return 0;
}
// this program tell us how to append a line to a file in C.