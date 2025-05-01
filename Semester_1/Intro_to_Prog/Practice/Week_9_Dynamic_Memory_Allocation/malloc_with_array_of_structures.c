#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Structure definition:
 * Holds data for a student - name, ID number, and marks.
 */
struct Student
{
    char name[20];
    int ID_no;
    float marks;
};

int main()
{
    /**
     * This program demonstrates how to:
     * - Dynamically allocate memory for an array of structures
     * - Use a loop to populate and print each structure
     * - Access structure members using array indexing and pointer arithmetic
     */

    struct Student *student_array;
    int num_students = 10;

    // Allocate memory for 10 student structures
    student_array = (struct Student *)malloc(num_students * sizeof(struct Student));

    if (student_array == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\n--- Enter details for %d students ---\n", num_students);

    // Loop to input student details
    for (int i = 0; i < num_students; i++)
    {
        printf("\nEntering details for student #%d\n", i + 1);

        printf("Enter name: ");
        scanf("%19s", student_array[i].name); // Limit input to avoid overflow

        printf("Enter ID number: ");
        scanf("%d", &student_array[i].ID_no);

        printf("Enter marks: ");
        scanf("%f", &student_array[i].marks);
    }

    printf("\n--- Student Records ---\n");

    // Loop to print student details
    for (int i = 0; i < num_students; i++)
    {
        printf("\nStudent #%d\n", i + 1);
        printf("Name : %s\n", student_array[i].name);
        printf("ID   : %d\n", student_array[i].ID_no);
        printf("Marks: %.2f\n", student_array[i].marks);
    }

    // Free the dynamically allocated memory
    free(student_array);

    return 0;
}
