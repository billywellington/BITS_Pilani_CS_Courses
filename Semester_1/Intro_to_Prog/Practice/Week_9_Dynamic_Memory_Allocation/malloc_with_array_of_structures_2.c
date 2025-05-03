#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int ID_no;
    float marks;
};

/**
 * This program demonstrates how to use dynamic memory allocation with structures
 * and access structure members using pointer arithmetic.
 * It allocates memory for multiple Student records,
 * takes input safely using fgets and scanf,
 * and prints the entered data.
 */

int main()
{
    int num_students = 0;
    struct Student *student_array = NULL;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Consume newline left in buffer by scanf
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;

    // Allocate memory for an array of Students
    student_array = (struct Student *)malloc(num_students * sizeof(struct Student));

    if (student_array == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input data using pointer arithmetic
    for (int i = 0; i < num_students; i++)
    {
        struct Student *current = student_array + i; // Pointer to the current student

        // Initialize fields
        current->ID_no = 0;
        current->marks = 0.0;
        strcpy(current->name, "");

        printf("\nEnter details for student #%d\n", i + 1);

        printf("Full Name: ");
        fgets(current->name, sizeof(current->name), stdin);

        // Remove newline from fgets
        size_t len = strlen(current->name);
        if (len > 0 && current->name[len - 1] == '\n')
        {
            current->name[len - 1] = '\0';
        }

        printf("ID Number: ");
        scanf("%d", &current->ID_no);

        printf("Marks: ");
        scanf("%f", &current->marks);

        // Clear input buffer after scanf
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
    }

    // Output data using pointer arithmetic
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < num_students; i++)
    {
        struct Student *current = student_array + i;
        printf("\nStudent #%d:\n", i + 1);
        printf("Name : %s\n", current->name);
        printf("ID   : %d\n", current->ID_no);
        printf("Marks: %.2f\n", current->marks);
    }

    free(student_array);
    return 0;
}
