/* 
   Program: Store multiple employee records in a binary file using fwrite()
            and read them back using fread(), then display the data.
   Concepts used:
      - Structures
      - File handling in C
      - Binary file operations (fwrite, fread)
      - Arrays of structures
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
};

int main() {
    struct Employee e[3], temp[3];
    FILE *fp;
    int i;

    // Input 3 employee records from user
    for (i = 0; i < 3; i++) {
        printf("Enter name and ID for employee %d:\n", i + 1);
        scanf("%s %d", e[i].name, &e[i].id);
    }

    // Open binary file for writing ("wb" = write binary)
    fp = fopen("emp.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write entire array of structures to file at once
    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Open binary file for reading ("rb" = read binary)
    fp = fopen("emp.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read 3 records from file into temp array
    fread(temp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Display employee data read from file
    printf("\nData Read From Binary File:\n");
    for (i = 0; i < 3; i++) {
        printf("Employee %d: %s | ID: %d\n",
               i + 1,
               temp[i].name,
               temp[i].id);
    }

    return 0;
}
