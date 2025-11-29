#include <stdio.h>
#include <string.h>

int main(void){
    char filename[256];
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = 0;

    FILE *f = fopen(filename, "r");
    if (!f){
        printf("Error: file '%s' does not exist or cannot be opened.\n", filename);
        return 0;
    }

    char buf[1024];
    while (fgets(buf, sizeof(buf), f)) fputs(buf, stdout);
    fclose(f);

    return 0;
}
// this program tells us if a file exists and prints its contents if it does