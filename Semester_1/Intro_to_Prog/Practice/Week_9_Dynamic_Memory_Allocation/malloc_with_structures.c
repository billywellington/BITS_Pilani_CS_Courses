#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**This program demonstrates how to use malloc() with structures in C.
 * It shows two ways of working with structs:
 * 1. Using a regular (non-pointer) struct variable.
 * 2. Using a pointer to a struct allocated dynamically with malloc().
 */

// Define a structure called Student
struct Student
{
    char name[20]; // Student's name (character array)
    int ID_no;     // Student's ID number
    float marks;   // Student's marks
};

int main()
{
    // =======================
    // STATIC STRUCTURE USAGE
    // =======================

    // Declare and initialize a struct (static memory allocation)
    struct Student student_1;

    // Populate the struct using dot notation
    student_1.ID_no = 1234;
    student_1.marks = 4.5;
    strcpy(student_1.name, "Billy Wellintgon");

    // Access and print the values using dot notation
    printf("\n--- Student 1 (static) ---\n");
    printf("Student Name: %s\n", student_1.name);
    printf("Student ID: %d\n", student_1.ID_no);
    printf("Student Marks: %.2f\n", student_1.marks);

    // ===========================
    // DYNAMIC STRUCTURE USAGE
    // ===========================

    // Declare a pointer to a struct Student
    struct Student *student_ptr;

    // Allocate memory for 2 Student structs (dynamically)
    student_ptr = (struct Student *)malloc(1 * sizeof(struct Student));

    // Check if memory allocation succeeded
    if (student_ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Populate the first struct in the allocated memory using arrow notation
    student_ptr->ID_no = 1334;
    student_ptr->marks = 4.4;
    strcpy(student_ptr->name, "Kay Wellintgon");

    // Access and print the values using arrow notation
    printf("\n--- Student 2 (dynamic) ---\n");
    printf("Student Name: %s\n", student_ptr->name);
    printf("Student ID: %d\n", student_ptr->ID_no);
    printf("Student Marks: %.2f\n", student_ptr->marks);

    // Free the dynamically allocated memory to avoid memory leaks
    free(student_ptr);

    return 0;
}
