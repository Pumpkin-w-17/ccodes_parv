#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int n;
    scanf("%d", &n);

    int c; while ((c = getchar()) != '\n' && c != EOF) {}

    FILE *f = fopen("students.txt", "w");
    if (!f){ perror("Cannot open file"); return 0; }

    for (int i = 0; i < n; ++i){
        char name[200];
        int roll;
        double marks;

        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        scanf("%d", &roll);
        scanf("%lf", &marks);
        while ((c = getchar()) != '\n' && c != EOF) {}

        fprintf(f, "%s;%d;%.2f\n", name, roll, marks);
    }

    fclose(f);

    f = fopen("students.txt", "r");
    if (!f){ perror("Cannot open file to read"); return 0; }

    char line[512];
    while (fgets(line, sizeof(line), f)){
        char nm[200];
        int r;
        double m;

        if (sscanf(line, "%199[^;];%d;%lf", nm, &r, &m) == 3){
            printf("Name: %s, Roll: %d, Marks: %.2f\n", nm, r, m);
        }
    }

    fclose(f);
    return 0;
}
// this program reads and writes student records to a file using semicolon as a delimiter.  It first collects student data from user input, writes it to a file, and then reads the data back from the file to display it                     