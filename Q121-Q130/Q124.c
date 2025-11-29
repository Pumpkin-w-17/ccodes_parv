#include <stdio.h>
#include <string.h>

int main(void){
    char src[256], dst[256];

    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = 0;

    fgets(dst, sizeof(dst), stdin);
    dst[strcspn(dst, "\n")] = 0;

    FILE *fs = fopen(src, "r");
    if (!fs){ perror("Cannot open source"); return 0; }

    FILE *fd = fopen(dst, "w");
    if (!fd){ perror("Cannot open destination"); fclose(fs); return 0; }

    int c;
    while ((c = fgetc(fs)) != EOF){
        fputc(c, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("Copied %s -> %s\n", src, dst);
    return 0;
}
// This program copies the contents of one file to another.