/* 
   Program: Read one student's details and print them using a function 
            that accepts a structure as a parameter.
   Concepts used:
      - Structures
      - Function with structure parameter (pass by value)
      - Input/Output
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that takes a structure variable as argument and prints its members
void printStudent(struct Student stu) {
    printf("\nDisplaying from function:\n");
    printf("Name: %s\n", stu.name);
    printf("Roll No: %d\n", stu.roll_no);
    printf("Marks: %.2f\n", stu.marks);
}

int main() {
    struct Student s;   // Structure variable

    // Read data into structure
    printf("Enter name, roll_no, marks:\n");
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    // Call function and pass structure
    printStudent(s);

    return 0;
}
