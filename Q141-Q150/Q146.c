/* 
   Program: Define an Employee structure that contains a nested Date structure 
            for joining date and print employee details.
   Concepts used:
      - Structures
      - Nested structures (structure inside a structure)
      - Basic input/output
*/

#include <stdio.h>

struct Date {
    int day, month, year;  // Separate fields for date
};

struct Employee {
    char name[50];
    int id;
    struct Date doj;       // Nested structure member for Date of Joining
};

int main() {
    struct Employee e;     // Structure variable

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    // Input joining date (nested structure fields)
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.doj.day, &e.doj.month, &e.doj.year);

    // Print everything in a formatted way
    printf("\nEmployee Details:\n");
    printf("Name: %s | ID: %d | DOJ: %02d-%02d-%04d\n",
           e.name, e.id,
           e.doj.day, e.doj.month, e.doj.year);

    return 0;
}
