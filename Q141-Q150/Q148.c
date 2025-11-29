/* 
   Program: Take input for two Student structures and check if they 
            are completely identical (all members equal).
   Concepts used:
      - Structures
      - String comparison (strcmp)
      - Relational operators (==)
      - Input/Output
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input data for first student
    printf("Enter student 1 (name roll marks):\n");
    scanf("%s %d %f", s1.name, &s1.roll_no, &s1.marks);

    // Input data for second student
    printf("Enter student 2 (name roll marks):\n");
    scanf("%s %d %f", s2.name, &s2.roll_no, &s2.marks);

    // Compare each corresponding field
    if (strcmp(s1.name, s2.name) == 0 &&   // compare strings
        s1.roll_no == s2.roll_no &&        // compare integers
        s1.marks == s2.marks) {            // compare floats (exact)
        printf("Both Student Records Match Exactly.\n");
    } else {
        printf("Student Records Do NOT Match.\n");
    }

    return 0;
}
