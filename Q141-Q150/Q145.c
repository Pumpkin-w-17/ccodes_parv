/* 
   Program: Read details of multiple students and return the structure of the 
            student having highest marks from a function.
   Concepts used:
      - Structures
      - Array of structures
      - Function returning a structure
      - Loops and if conditions
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function returns a structure: the top-scoring student from the array
struct Student getTop(struct Student arr[], int size) {
    int i, maxIdx = 0;

    // Finding index of student with highest marks
    for (i = 1; i < size; i++) {
        if (arr[i].marks > arr[maxIdx].marks) {
            maxIdx = i;
        }
    }

    return arr[maxIdx];   // Return entire structure
}

int main() {
    struct Student students[5], top;
    int i;

    // Input details for all students
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll_no, marks for student %d:\n", i + 1);
        scanf("%s %d %f",
              students[i].name,
              &students[i].roll_no,
              &students[i].marks);
    }

    // Call function and receive top student's structure
    top = getTop(students, 5);

    // Display top student's details
    printf("\nTop Student Returned From Function:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n",
           top.name, top.roll_no, top.marks);

    return 0;
}
