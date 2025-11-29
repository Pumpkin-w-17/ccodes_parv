/* 
   Program: Read details of 5 students and print the one with highest marks.
   Concepts used:
      - Structures
      - Array of structures
      - Loops (for)
      - Conditional statement (if)
      - Basic input/output
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];   // Array of 5 structure variables
    int i, maxIndex = 0;   // maxIndex stores index of top-scoring student

    // Input details of all students
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll_no, marks for student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    // Find index of student having maximum marks
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;  // Update index of highest marks so far
        }
    }

    // Print details of top student
    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n",
           s[maxIndex].name, s[maxIndex].roll_no, s[maxIndex].marks);

    return 0;
}
