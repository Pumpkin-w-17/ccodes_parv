/* 
   Program: Dynamically allocate memory for an array of Student structures 
            using malloc(), then input and display their details.
   Concepts used:
      - Structures
      - Dynamic memory allocation (malloc, free)
      - Pointers and pointer-indexing (ptr[i])
      - Loops and I/O
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n, i;
    struct Student *ptr;   // Pointer to first element of dynamic array

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' students
    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    // Check if malloc failed
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details for each student using pointer indexing
    for (i = 0; i < n; i++) {
        printf("Enter name, roll_no, marks for student %d:\n", i + 1);
        scanf("%s %d %f",
              ptr[i].name,
              &ptr[i].roll_no,
              &ptr[i].marks);
    }

    // Display stored details
    printf("\nStored Student Details:\n");
    for (i = 0; i < n; i++) {
        printf("%d) Name: %s | Roll: %d | Marks: %.2f\n",
               i + 1,
               ptr[i].name,
               ptr[i].roll_no,
               ptr[i].marks);
    }

    // Free dynamically allocated memory
    free(ptr);

    return 0;
}
