/* 
   Program: Read, modify, and display student data using a pointer to struct.
   Concepts used: 
      - Structures
      - Pointers to structures
      - -> (arrow) operator
      - Input/Output (scanf/printf)
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;      // Normal structure variable
    struct Student *ptr;   // Pointer to structure

    ptr = &s;              // Pointer stores address of structure variable

    // Taking input using pointer and -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);     // same as s.name

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no); // same as &s.roll_no

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);   // same as &s.marks

    // Modify data through pointer (grace marks +5)
    ptr->marks += 5;

    // Display updated data using pointer
    printf("\nUpdated Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
