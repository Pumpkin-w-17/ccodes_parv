/* Program: Stores details of 5 students and prints all */

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];  // Array of structures
    int i;

    // Input Loop
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll_no, marks for student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    // Display Loop
    printf("\nAll Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("%d) %s | Roll: %d | Marks: %.2f\n",
               i+1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
