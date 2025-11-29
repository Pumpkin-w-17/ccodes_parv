#include <stdio.h>

int main(void){
    FILE *f = fopen("info.txt", "r");
    if (!f){ perror("Cannot open info.txt"); return 0; }

    char buf[1024];
    while (fgets(buf, sizeof(buf), f)){
        fputs(buf, stdout);
    }
    fclose(f);
    return 0;
}
// This program reads the contents of "info.txt" and prints it to the standard output.